/* 
 * File:   main.cxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 12:55 AM
 */

#include<gtk/gtk.h>

/*
 * 
 */
int main (int argc, char** argv)
{
    GtkBuilder *builder;
    GtkWidget *window;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "tutorial.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    gtk_builder_connect_signals(builder, NULL);
    g_object_unref(G_OBJECT(builder));
    
    gtk_widget_show(window);
    gtk_main();

    return 0;
}
