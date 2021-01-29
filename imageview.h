
typedef struct _Imageview {
	GtkApplicationWindow parent_instance;

	Disp *disp;

	GtkWidget *header_bar;

	GtkWidget *progress_box;
	GtkWidget *progress;

	GtkWidget *error_box;
	GtkWidget *error_label;

	Imagepresent *imagepresent;

	Conversionview *conversionview;

	Infobar *infobar;

} Imageview;

typedef GtkApplicationWindowClass ImageviewClass;

void imageview_status_update( Imageview *imageview );

Imageview *imageview_new( GtkApplication *application, GFile *file );
Imageview *imageview_new_from_source( GtkApplication *application, 
	VipsSource *source );
