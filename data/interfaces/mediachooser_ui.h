/* automatically generated from mediachooser.ui */
#ifdef __SUNPRO_C
#pragma align 4 (mediachooser_ui)
#endif
#ifdef __GNUC__
static const char mediachooser_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char mediachooser_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.20\"/><object class=\"GtkSpinner\" id=\"spinner\"><pro"
  "perty name=\"can_focus\">False</property><property name=\"no_show_all\""
  ">True</property><property name=\"active\">True</property></object><obje"
  "ct class=\"GtkDialog\" id=\"chooser\"><property name=\"can_focus\">Fals"
  "e</property><property name=\"border_width\">0</property><property name="
  "\"modal\">True</property><property name=\"default_width\">640</property"
  "><property name=\"default_height\">480</property><property name=\"icon_"
  "name\">org.xfce.parole</property><property name=\"type_hint\">dialog</p"
  "roperty><signal name=\"destroy\" handler=\"parole_media_chooser_destroy"
  "_cb\" swapped=\"no\"/><child type=\"titlebar\"><object class=\"GtkHeade"
  "rBar\"><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">False</property><property name=\"title\" translatable=\"yes\">Op"
  "en Media Files</property><property name=\"has_subtitle\">False</propert"
  "y><child><object class=\"GtkButton\" id=\"close\"><property name=\"labe"
  "l\">Cancel</property><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">True</property><property name=\"receives_default\""
  ">True</property><signal name=\"clicked\" handler=\"parole_media_chooser"
  "_close_clicked\" swapped=\"no\"/></object></child><child><object class="
  "\"GtkButton\" id=\"open\"><property name=\"label\">Open</property><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">True<"
  "/property><property name=\"can_default\">True</property><property name="
  "\"has_default\">True</property><property name=\"receives_default\">True"
  "</property><signal name=\"clicked\" handler=\"parole_media_chooser_add_"
  "clicked\" swapped=\"no\"/><style><class name=\"suggested-action\"/></st"
  "yle></object><packing><property name=\"pack_type\">end</property><prope"
  "rty name=\"position\">1</property></packing></child></object></child><c"
  "hild internal-child=\"vbox\"><object class=\"GtkBox\" id=\"dialog-vbox1"
  "\"><property name=\"can_focus\">False</property><property name=\"orient"
  "ation\">vertical</property><property name=\"spacing\">2</property><chil"
  "d internal-child=\"action_area\"><object class=\"GtkButtonBox\" id=\"di"
  "alog-action_area1\"><property name=\"can_focus\">False</property><prope"
  "rty name=\"no_show_all\">True</property><property name=\"layout_style\""
  ">end</property><child><placeholder/></child></object><packing><property"
  " name=\"expand\">False</property><property name=\"fill\">False</propert"
  "y><property name=\"pack_type\">end</property><property name=\"position\""
  ">0</property></packing></child><child><object class=\"GtkFileChooserWid"
  "get\" id=\"filechooserwidget\"><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">False</property><property name=\"border_"
  "width\">0</property><property name=\"extra_widget\">spinner</property><"
  "property name=\"select_multiple\">True</property><signal name=\"current"
  "-folder-changed\" handler=\"media_chooser_folder_changed_cb\" swapped=\""
  "no\"/><signal name=\"file-activated\" handler=\"media_chooser_file_acti"
  "vate_cb\" swapped=\"no\"/></object><packing><property name=\"expand\">T"
  "rue</property><property name=\"fill\">True</property><property name=\"p"
  "osition\">1</property></packing></child></object></child></object></int"
  "erface>"
};

static const unsigned mediachooser_ui_length = 3109u;

