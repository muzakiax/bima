/* Generated by GOB (v2.0.13)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <libxml/parser.h>
#include <libxml/tree.h>

#include "bima-entity.h"
#include "bima-relation.h"
#include "bima-utils.h"
#include "bima-view.h"
#include "bima-module.h"
#include "bima-form.h"
#include "bima-template.h"
#include "bima-query.h"

#include "dia-er-parse.h"
#include "bma-file-parse.h"
#include "file-utils.h"

//#include "bima-report.h"


#ifndef __BIMA_APP_DATA_H__
#define __BIMA_APP_DATA_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



typedef enum {
	DB_POSTGRESQL,
	DB_MYSQL,
	DB_ORACLE
} BimaDbType;

typedef enum {
	DIAGRAM_UML,
	DIAGRAM_ER
} BimaDiagramType;


/*
 * Type checking and casting macros
 */
#define BIMA_TYPE_APP_DATA	(bima_app_data_get_type())
#define BIMA_APP_DATA(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), bima_app_data_get_type(), BimaAppData)
#define BIMA_APP_DATA_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), bima_app_data_get_type(), BimaAppData const)
#define BIMA_APP_DATA_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), bima_app_data_get_type(), BimaAppDataClass)
#define BIMA_IS_APP_DATA(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), bima_app_data_get_type ())

#define BIMA_APP_DATA_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), bima_app_data_get_type(), BimaAppDataClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_BIMA_APP_DATA__
#define __TYPEDEF_BIMA_APP_DATA__
typedef struct _BimaAppData BimaAppData;
#endif
struct _BimaAppData {
	GObject __parent__;
	/*< public >*/
	BimaDiagramType diagram_type;
	gchar * source_file;
	gchar * output_dir;
	gchar * project_name;
	gchar * version;
	gchar * author;
	BimaDbType db_type;
	gchar * db_name;
	gchar * db_user_name;
	gchar * db_user_pass;
	gint num_modules;
	GList * modules;
	GList * entities;
	GList * relations;
	gint num_views;
	GList * views;
	GList * reports;
	gint num_forms;
	GList * forms;
	BimaTemplate * template;
	BimaQuery * query;
};

/*
 * Class definition
 */
typedef struct _BimaAppDataClass BimaAppDataClass;
struct _BimaAppDataClass {
	GObjectClass __parent__;
};


/*
 * Public methods
 */
GType	bima_app_data_get_type	(void);
gchar * 	bima_app_data_get_project_name	(BimaAppData * self);
void 	bima_app_data_set_project_name	(BimaAppData * self,
					gchar * val);
gchar * 	bima_app_data_get_version	(BimaAppData * self);
void 	bima_app_data_set_version	(BimaAppData * self,
					gchar * val);
gchar * 	bima_app_data_get_author	(BimaAppData * self);
void 	bima_app_data_set_author	(BimaAppData * self,
					gchar * val);
gint 	bima_app_data_get_db_type	(BimaAppData * self);
void 	bima_app_data_set_db_type	(BimaAppData * self,
					gint val);
gchar * 	bima_app_data_get_db_name	(BimaAppData * self);
void 	bima_app_data_set_db_name	(BimaAppData * self,
					gchar * val);
gchar * 	bima_app_data_get_db_user_name	(BimaAppData * self);
void 	bima_app_data_set_db_user_name	(BimaAppData * self,
					gchar * val);
gchar * 	bima_app_data_get_db_user_pass	(BimaAppData * self);
void 	bima_app_data_set_db_user_pass	(BimaAppData * self,
					gchar * val);
void 	bima_app_data_parse_file_diagram	(BimaAppData * self,
					const gchar * file_name);
void 	bima_app_data_add_module	(BimaAppData * self,
					BimaModule * module);
void 	bima_app_data_delete_module	(BimaAppData * self,
					gchar * id);
void 	bima_app_data_create_and_add_module	(BimaAppData * self,
					gchar * id,
					gchar * parent_id);
void 	bima_app_data_add_entity	(BimaAppData * self,
					BimaEntity * entity);
BimaEntity * 	bima_app_data_find_entity	(BimaAppData * self,
					gchar * id);
void 	bima_app_data_add_relation	(BimaAppData * self,
					BimaRelation * relation);
BimaRelation * 	bima_app_data_find_relation	(BimaAppData * self,
					gchar * id);
void 	bima_app_data_add_view	(BimaAppData * self,
					BimaView * view);
BimaView * 	bima_app_data_create_new_view	(BimaAppData * self,
					gchar * entity_id);
void 	bima_app_data_delete_view	(BimaAppData * self,
					gchar * id);
void 	bima_app_data_add_report	(BimaAppData * self,
					BimaForm * report);
BimaForm * 	bima_app_data_create_new_report	(BimaAppData * self,
					gchar * entity_id,
					gchar * template_id);
void 	bima_app_data_delete_report	(BimaAppData * self,
					gchar * id);
void 	bima_app_data_add_form	(BimaAppData * self,
					BimaForm * form);
BimaForm * 	bima_app_data_create_new_form	(BimaAppData * self,
					gchar * entity_id,
					gchar * template_id);
void 	bima_app_data_delete_form	(BimaAppData * self,
					gchar * id);
void 	bima_app_data_populate_views	(BimaAppData * self);
void 	bima_app_data_populate_forms	(BimaAppData * self);
gint 	bima_app_data_write_to_xml	(BimaAppData * self,
					gchar * file_name);
BimaAppData * 	bima_app_data_new	(void);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define BIMA_APP_DATA_PROP_PROJECT_NAME(arg)    	"project_name", __extension__ ({gchar *z = (arg); z;})
#define BIMA_APP_DATA_GET_PROP_PROJECT_NAME(arg)	"project_name", __extension__ ({gchar **z = (arg); z;})
#define BIMA_APP_DATA_PROP_VERSION(arg)    	"version", __extension__ ({gchar *z = (arg); z;})
#define BIMA_APP_DATA_GET_PROP_VERSION(arg)	"version", __extension__ ({gchar **z = (arg); z;})
#define BIMA_APP_DATA_PROP_AUTHOR(arg)    	"author", __extension__ ({gchar *z = (arg); z;})
#define BIMA_APP_DATA_GET_PROP_AUTHOR(arg)	"author", __extension__ ({gchar **z = (arg); z;})
#define BIMA_APP_DATA_PROP_DB_TYPE(arg)    	"db_type", __extension__ ({gint z = (arg); z;})
#define BIMA_APP_DATA_GET_PROP_DB_TYPE(arg)	"db_type", __extension__ ({gint *z = (arg); z;})
#define BIMA_APP_DATA_PROP_DB_NAME(arg)    	"db_name", __extension__ ({gchar *z = (arg); z;})
#define BIMA_APP_DATA_GET_PROP_DB_NAME(arg)	"db_name", __extension__ ({gchar **z = (arg); z;})
#define BIMA_APP_DATA_PROP_DB_USER_NAME(arg)    	"db_user_name", __extension__ ({gchar *z = (arg); z;})
#define BIMA_APP_DATA_GET_PROP_DB_USER_NAME(arg)	"db_user_name", __extension__ ({gchar **z = (arg); z;})
#define BIMA_APP_DATA_PROP_DB_USER_PASS(arg)    	"db_user_pass", __extension__ ({gchar *z = (arg); z;})
#define BIMA_APP_DATA_GET_PROP_DB_USER_PASS(arg)	"db_user_pass", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define BIMA_APP_DATA_PROP_PROJECT_NAME(arg)    	"project_name",(gchar *)(arg)
#define BIMA_APP_DATA_GET_PROP_PROJECT_NAME(arg)	"project_name",(gchar **)(arg)
#define BIMA_APP_DATA_PROP_VERSION(arg)    	"version",(gchar *)(arg)
#define BIMA_APP_DATA_GET_PROP_VERSION(arg)	"version",(gchar **)(arg)
#define BIMA_APP_DATA_PROP_AUTHOR(arg)    	"author",(gchar *)(arg)
#define BIMA_APP_DATA_GET_PROP_AUTHOR(arg)	"author",(gchar **)(arg)
#define BIMA_APP_DATA_PROP_DB_TYPE(arg)    	"db_type",(gint )(arg)
#define BIMA_APP_DATA_GET_PROP_DB_TYPE(arg)	"db_type",(gint *)(arg)
#define BIMA_APP_DATA_PROP_DB_NAME(arg)    	"db_name",(gchar *)(arg)
#define BIMA_APP_DATA_GET_PROP_DB_NAME(arg)	"db_name",(gchar **)(arg)
#define BIMA_APP_DATA_PROP_DB_USER_NAME(arg)    	"db_user_name",(gchar *)(arg)
#define BIMA_APP_DATA_GET_PROP_DB_USER_NAME(arg)	"db_user_name",(gchar **)(arg)
#define BIMA_APP_DATA_PROP_DB_USER_PASS(arg)    	"db_user_pass",(gchar *)(arg)
#define BIMA_APP_DATA_GET_PROP_DB_USER_PASS(arg)	"db_user_pass",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif