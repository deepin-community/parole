
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */

#include "gst-enum-types.h"

#include "parole-gst.h"

/* enumerations from "parole-gst.h" */
GType
parole_aspect_ratio_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { PAROLE_ASPECT_RATIO_NONE, "PAROLE_ASPECT_RATIO_NONE", "none" },
      { PAROLE_ASPECT_RATIO_AUTO, "PAROLE_ASPECT_RATIO_AUTO", "auto" },
      { PAROLE_ASPECT_RATIO_SQUARE, "PAROLE_ASPECT_RATIO_SQUARE", "square" },
      { PAROLE_ASPECT_RATIO_4_3, "PAROLE_ASPECT_RATIO_4_3", "4-3" },
      { PAROLE_ASPECT_RATIO_16_9, "PAROLE_ASPECT_RATIO_16_9", "16-9" },
      { PAROLE_ASPECT_RATIO_DVB, "PAROLE_ASPECT_RATIO_DVB", "dvb" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("ParoleAspectRatio", values);
  }
  return etype;
}

/* Generated data ends here */
