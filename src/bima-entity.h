/* Generated by GOB (v2.0.13)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <stdio.h>

#include "bima-attribute.h"
#include "bima-foreign-key.h"

//typedef enum {
//	ENTITY_MASTER,
//	ENTITY_TRANSACTION
//} BimaEntityType;

extern int bima_relation_get_num_of_attribute();
extern GList *bima_relation_get_attributes();


#ifndef __BIMA_ENTITY_H__
#define __BIMA_ENTITY_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef __TYPEDEF_BIMA_APP_DATA__
#define __TYPEDEF_BIMA_APP_DATA__
typedef struct _BimaAppData BimaAppData;
#endif

/*
 * Type checking and casting macros
 */
#define BIMA_TYPE_ENTITY	(bima_entity_get_type())
#define BIMA_ENTITY(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), bima_entity_get_type(), BimaEntity)
#define BIMA_ENTITY_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), bima_entity_get_type(), BimaEntity const)
#define BIMA_ENTITY_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), bima_entity_get_type(), BimaEntityClass)
#define BIMA_IS_ENTITY(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), bima_entity_get_type ())

#define BIMA_ENTITY_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), bima_entity_get_type(), BimaEntityClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_BIMA_ENTITY__
#define __TYPEDEF_BIMA_ENTITY__
typedef struct _BimaEntity BimaEntity;
#endif
struct _BimaEntity {
	GObject __parent__;
	/*< public >*/
	gchar * id;
	gchar * name;
	gchar * abbreviation;
	gchar * description;
	gchar * module_id;
	GList * attributes;
	gint num_of_attribute;
	GList * foreign_key;
	gint num_of_foreign_key;
	GList * foreign_attr;
	gint num_of_foreign_attribute;
	gboolean is_weak;
	int num_of_key;
};

/*
 * Class definition
 */
typedef struct _BimaEntityClass BimaEntityClass;
struct _BimaEntityClass {
	GObjectClass __parent__;
};


/*
 * Public methods
 */
GType	bima_entity_get_type	(void);
gchar * 	bima_entity_get_id	(BimaEntity * self);
void 	bima_entity_set_id	(BimaEntity * self,
					gchar * val);
gchar * 	bima_entity_get_name	(BimaEntity * self);
void 	bima_entity_set_name	(BimaEntity * self,
					gchar * val);
gchar * 	bima_entity_get_abbreviation	(BimaEntity * self);
void 	bima_entity_set_abbreviation	(BimaEntity * self,
					gchar * val);
gchar * 	bima_entity_get_description	(BimaEntity * self);
void 	bima_entity_set_description	(BimaEntity * self,
					gchar * val);
gchar * 	bima_entity_get_module_id	(BimaEntity * self);
void 	bima_entity_set_module_id	(BimaEntity * self,
					gchar * val);
void 	bima_entity_add_attribute	(BimaEntity * self,
					BimaAttribute * attribute);
void 	bima_entity_add_foreign_key	(BimaEntity * self,
					BimaForeignKey * fk);
void 	bima_entity_add_foreign_attribute	(BimaEntity * self,
					BimaForeignKey * fk);
GList * 	bima_entity_get_all_attribute	(BimaEntity * self,
					BimaAppData * app_data);
GObject * 	bima_entity_get_nth_attribute	(BimaEntity * self,
					gint n);
gchar * 	bima_entity_get_pk_string	(BimaEntity * self,
					gchar * separator,
					gchar * alias);
void 	bima_entity_write_to_xml	(BimaEntity * self,
					FILE * ofile);
BimaEntity * 	bima_entity_new	(void);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define BIMA_ENTITY_PROP_ID(arg)    	"id", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ENTITY_GET_PROP_ID(arg)	"id", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ENTITY_PROP_NAME(arg)    	"name", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ENTITY_GET_PROP_NAME(arg)	"name", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ENTITY_PROP_ABBREVIATION(arg)    	"abbreviation", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ENTITY_GET_PROP_ABBREVIATION(arg)	"abbreviation", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ENTITY_PROP_DESCRIPTION(arg)    	"description", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ENTITY_GET_PROP_DESCRIPTION(arg)	"description", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ENTITY_PROP_MODULE_ID(arg)    	"module_id", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ENTITY_GET_PROP_MODULE_ID(arg)	"module_id", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define BIMA_ENTITY_PROP_ID(arg)    	"id",(gchar *)(arg)
#define BIMA_ENTITY_GET_PROP_ID(arg)	"id",(gchar **)(arg)
#define BIMA_ENTITY_PROP_NAME(arg)    	"name",(gchar *)(arg)
#define BIMA_ENTITY_GET_PROP_NAME(arg)	"name",(gchar **)(arg)
#define BIMA_ENTITY_PROP_ABBREVIATION(arg)    	"abbreviation",(gchar *)(arg)
#define BIMA_ENTITY_GET_PROP_ABBREVIATION(arg)	"abbreviation",(gchar **)(arg)
#define BIMA_ENTITY_PROP_DESCRIPTION(arg)    	"description",(gchar *)(arg)
#define BIMA_ENTITY_GET_PROP_DESCRIPTION(arg)	"description",(gchar **)(arg)
#define BIMA_ENTITY_PROP_MODULE_ID(arg)    	"module_id",(gchar *)(arg)
#define BIMA_ENTITY_GET_PROP_MODULE_ID(arg)	"module_id",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif