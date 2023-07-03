/* automatically generated from save-playlist.ui */
#ifdef __SUNPRO_C
#pragma align 4 (save_playlist_ui)
#endif
#ifdef __GNUC__
static const char save_playlist_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char save_playlist_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.20\"/><object class=\"GtkListStore\" id=\"liststore\">"
  "<columns><column type=\"gchararray\"/><column type=\"gchararray\"/><col"
  "umn type=\"guint\"/></columns></object><object class=\"GtkComboBox\" id"
  "=\"format_combo\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">False</property><property name=\"halign\">end</proper"
  "ty><property name=\"hexpand\">True</property><property name=\"model\">l"
  "iststore</property><property name=\"active\">1</property><property name"
  "=\"id_column\">1</property><signal name=\"changed\" handler=\"parole_me"
  "dia_list_format_combo_changed_cb\" swapped=\"no\"/><child><object class"
  "=\"GtkCellRendererText\" id=\"playlist_renderer\"/><attributes><attribu"
  "te name=\"text\">0</attribute></attributes></child></object><object cla"
  "ss=\"GtkFileChooserDialog\" id=\"filechooserdialog\"><property name=\"c"
  "an_focus\">False</property><property name=\"border_width\">5</property>"
  "<property name=\"title\" translatable=\"yes\">Save Playlist as...</prop"
  "erty><property name=\"role\">GtkFileChooserDialog</property><property n"
  "ame=\"window_position\">center-on-parent</property><property name=\"ico"
  "n_name\">org.xfce.parole</property><property name=\"type_hint\">dialog<"
  "/property><property name=\"action\">save</property><property name=\"do_"
  "overwrite_confirmation\">True</property><property name=\"extra_widget\""
  ">format_combo</property><child internal-child=\"vbox\"><object class=\""
  "GtkBox\" id=\"filechooserdialog-vbox1\"><property name=\"can_focus\">Fa"
  "lse</property><property name=\"orientation\">vertical</property><child "
  "internal-child=\"action_area\"><object class=\"GtkButtonBox\" id=\"file"
  "chooserdialog-action_area1\"><property name=\"can_focus\">False</proper"
  "ty><property name=\"layout_style\">end</property><child><placeholder/><"
  "/child><child><placeholder/></child></object><packing><property name=\""
  "expand\">False</property><property name=\"fill\">True</property><proper"
  "ty name=\"pack_type\">end</property><property name=\"position\">0</prop"
  "erty></packing></child></object></child></object></interface>"
};

static const unsigned save_playlist_ui_length = 2018u;

