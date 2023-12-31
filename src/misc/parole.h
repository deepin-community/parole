/*
 * * Copyright (C) 2009-2011 Ali <aliov@xfce.org>
 * * Copyright (C) 2012-2017 Simon Steinbeiß <ochosi@xfce.org>
 * * Copyright (C) 2012-2020 Sean Davis <bluesabre@xfce.org>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef SRC_MISC_PAROLE_H_
#define SRC_MISC_PAROLE_H_

#define __PAROLE_H_INSIDE__

#include <glib-object.h>

#include <libxfce4util/libxfce4util.h>

#include "src/misc/parole-debug.h"
#include "src/misc/parole-file.h"
#include "src/misc/parole-filters.h"
#include "src/misc/parole-pl-parser.h"
#include "src/misc/parole-provider-player.h"
#include "src/misc/parole-provider-plugin.h"
#include "src/misc/parole-stream.h"

/**
 * PAROLE_MAJOR_VERSION:
 *
 * Major version number.
 *
 * Since: 0.2
 */
#define PAROLE_MAJOR_VERSION		4

/**
 * PAROLE_MINOR_VERSION:
 *
 * Minor version number.
 *
 * Since: 0.2
 */
#define PAROLE_MINOR_VERSION		18

/**
 * PAROLE_MICRO_VERSION:
 *
 * Micro version number.
 *
 * Since: 0.2
 */
#define PAROLE_MICRO_VERSION		0

/**
 * PAROLE_CHECK_VERSION:
 * @major: major version number
 * @minor: minor version number
 * @micro: micro version number
 *
 * Checks the parole version.
 *
 * Since: 0.2
 */
#define	PAROLE_CHECK_VERSION(major,minor,micro)					\
    (PAROLE_MAJOR_VERSION > (major) || 						\
    (PAROLE_MAJOR_VERSION == (major) && PAROLE_MINOR_VERSION > (minor)) || 	\
    (PAROLE_MAJOR_VERSION == (major) && PAROLE_MINOR_VERSION == (minor) && 	\
     PAROLE_MICRO_VERSION >= (micro)))

/*
 * GType module registration macros.
 */
/**
 * PAROLE_DEFINE_TYPE:
 * @TN: The name of the new type, in Camel case
 * @t_n: The name of the new type, in lowercase, with words separated by '_'
 * @T_P: The #GType of the parent type
 *
 * Create a new type definition.
 *
 * Since: 0.2
 */
#define PAROLE_DEFINE_TYPE(TN, t_n, T_P) PAROLE_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, 0, {})

/**
 * PAROLE_DEFINE_TYPE_EXTENDED:
 * @TN: The name of the new type, in Camel case
 * @t_n: The name of the new type, in lowercase, with words separated by '_'
 * @T_P: The #GType of the parent type
 * @_f_: #GTypeFlags to pass to g_type_module_register_type ()
 * @_C_: Custom code that gets inserted in *_get_type() function
 *
 * Create a new type definition, passing flags and custom code to be inserted in the *_get_type() function.
 *
 * Since: 0.2
 */
#define PAROLE_DEFINE_TYPE_EXTENDED(TN, t_n, T_P, _f_, _C_)	_PAROLE_DEFINE_TYPE_EXTENDED_BEGIN(TN, t_n, T_P, _f_) {_C_;} _PAROLE_DEFINE_TYPE_EXTENDED_END()

/**
 * PAROLE_DEFINE_TYPE_WITH_CODE:
 * @TN: The name of the new type, in Camel case
 * @t_n: The name of the new type, in lowercase, with words separated by '_'
 * @T_P: The #GType of the parent type
 * @_C_: Custom code that gets inserted in *_get_type() function
 *
 * Create a new type definition, passing custom code to be inserted in the *_get_type() function.
 *
 * Since: 0.2
 */
#define PAROLE_DEFINE_TYPE_WITH_CODE(TN, t_n, T_P, _C_)	_PAROLE_DEFINE_TYPE_EXTENDED_BEGIN(TN, t_n, T_P, 0) {_C_;} _PAROLE_DEFINE_TYPE_EXTENDED_END()

/**
 * PAROLE_DEFINE_ABSTRACT_TYPE:
 * @TN: The name of the new type, in Camel case
 * @t_n: The name of the new type, in lowercase, with words separated by '_'
 * @T_P: The #GType of the parent type
 *
 * Create a new abstract type definition.
 *
 * Since: 0.2
 */
#define PAROLE_DEFINE_ABSTRACT_TYPE(TN, t_n, T_P) PAROLE_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT, {})

/**
 * PAROLE_DEFINE_ABSTRACT_TYPE_WITH_CODE:
 * @TN: The name of the new type, in Camel case
 * @t_n: The name of the new type, in lowercase, with words separated by '_'
 * @T_P: The #GType of the parent type
 * @_C_: Custom code that gets inserted in *_get_type() function
 *
 * Create a new abstract type definition, passing custom code to be inserted in the *_get_type() function.
 *
 * Since: 0.2
 */
#define PAROLE_DEFINE_ABSTRACT_TYPE_WITH_CODE(TN, t_n, T_P, _C_) PAROLE_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT, _C_)


#define _PAROLE_DEFINE_TYPE_EXTENDED_BEGIN(TypeName, type_name, TYPE_PARENT, flags) \
										\
static gpointer type_name##_parent_class = NULL; 				\
static GType    type_name##_type = G_TYPE_INVALID; 				\
										\
static void     type_name##_init              (TypeName        *self); 		\
static void     type_name##_class_init        (TypeName##Class *klass); 	\
static void     type_name##_class_intern_init (TypeName##Class *klass) 		\
{ 										\
    type_name##_parent_class = g_type_class_peek_parent (klass); 		\
    type_name##_class_init (klass); 						\
} 										\
										\
GType 										\
type_name##_get_type (void) 							\
{ 										\
  return type_name##_type; 							\
} 										\
										\
void 										\
type_name##_register_type (ParoleProviderPlugin *provider_plugin_def) 		\
{ 										\
    GType parole_define_type_id; 						\
										\
    static const GTypeInfo parole_define_type_info = 				\
    {										\
	sizeof (TypeName##Class), 						\
	NULL, 									\
	NULL, 									\
	(GClassInitFunc) (void (*)(void)) type_name##_class_intern_init, 			\
	NULL, 									\
	NULL, 									\
	sizeof (TypeName), 							\
	0, 									\
	(GInstanceInitFunc) (void (*)(void)) type_name##_init, 					\
	NULL, 									\
    }; 										\
										\
    parole_define_type_id = 							\
	g_type_module_register_type ((GTypeModule*)provider_plugin_def, 	\
				     TYPE_PARENT, 				\
				     #TypeName, 				\
				     &parole_define_type_info, 			\
				     flags); 					\
    type_name##_type = parole_define_type_id; 					\
										\
    { /* Code */
#define _PAROLE_DEFINE_TYPE_EXTENDED_END()					\
    }										\
}

/**
 * PAROLE_IMPLEMENT_INTERFACE:
 * @TYPE_IFACE: the #GType of the interface to add
 * @iface_init: The interface init function
 *
 * Convenience function for interface implementation.
 *
 */
#define PAROLE_IMPLEMENT_INTERFACE(TYPE_IFACE, iface_init) 			\
{ 										\
    static const GInterfaceInfo parole_implement_interface_info = 		\
    { 										\
	(GInterfaceInitFunc) (void (*)(void)) iface_init 					\
    }; 										\
										\
    g_type_module_add_interface ((GTypeModule*)provider_plugin_def, 		\
				 parole_define_type_id, 			\
				 TYPE_IFACE, 					\
				 &parole_implement_interface_info); 		\
}


#undef __PAROLE_H_INSIDE__

#endif /* SRC_MISC_PAROLE_H_ */
