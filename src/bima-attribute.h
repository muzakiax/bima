/* Generated by GOB (v2.0.13)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <stdio.h>

#ifndef __BIMA_ATTRIBUTE_H__
#define __BIMA_ATTRIBUTE_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum {
	ATTRIBUTE,
	ATTRIBUTE_FOREING,
	ATTRIBUTE_FOREING_KEY
} BimaAttributeType;

/*
 * Type checking and casting macros
 */
#define BIMA_TYPE_ATTRIBUTE	(bima_attribute_get_type())
#define BIMA_ATTRIBUTE(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), bima_attribute_get_type(), BimaAttribute)
#define BIMA_ATTRIBUTE_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), bima_attribute_get_type(), BimaAttribute const)
#define BIMA_ATTRIBUTE_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), bima_attribute_get_type(), BimaAttributeClass)
#define BIMA_IS_ATTRIBUTE(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), bima_attribute_get_type ())

#define BIMA_ATTRIBUTE_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), bima_attribute_get_type(), BimaAttributeClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_BIMA_ATTRIBUTE__
#define __TYPEDEF_BIMA_ATTRIBUTE__
typedef struct _BimaAttribute BimaAttribute;
#endif
struct _BimaAttribute {
	GObject __parent__;
	/*< public >*/
	gchar * id;
	gchar * name;
	gchar * title;
	gboolean is_key;
	gboolean is_weak;
	gboolean is_derived;
	gboolean is_multivalued;
	gboolean not_null;
	gchar * field_type;
	gint length;
	gchar * control_type;
	gchar * parameter;
	gchar * description;
	GObject * parent;
	BimaAttributeType attribute_type;
};

/*
 * Class definition
 */
typedef struct _BimaAttributeClass BimaAttributeClass;
struct _BimaAttributeClass {
	GObjectClass __parent__;
};


/*
 * Public methods
 */
GType	bima_attribute_get_type	(void);
gchar * 	bima_attribute_get_id	(BimaAttribute * self);
void 	bima_attribute_set_id	(BimaAttribute * self,
					gchar * val);
gchar * 	bima_attribute_get_name	(BimaAttribute * self);
void 	bima_attribute_set_name	(BimaAttribute * self,
					gchar * val);
gchar * 	bima_attribute_get_title	(BimaAttribute * self);
void 	bima_attribute_set_title	(BimaAttribute * self,
					gchar * val);
gboolean 	bima_attribute_get_not_null	(BimaAttribute * self);
void 	bima_attribute_set_not_null	(BimaAttribute * self,
					gboolean val);
gchar * 	bima_attribute_get_field_type	(BimaAttribute * self);
void 	bima_attribute_set_field_type	(BimaAttribute * self,
					gchar * val);
gint 	bima_attribute_get_length	(BimaAttribute * self);
void 	bima_attribute_set_length	(BimaAttribute * self,
					gint val);
gchar * 	bima_attribute_get_control_type	(BimaAttribute * self);
void 	bima_attribute_set_control_type	(BimaAttribute * self,
					gchar * val);
gchar * 	bima_attribute_get_parameter	(BimaAttribute * self);
void 	bima_attribute_set_parameter	(BimaAttribute * self,
					gchar * val);
gchar * 	bima_attribute_get_description	(BimaAttribute * self);
void 	bima_attribute_set_description	(BimaAttribute * self,
					gchar * val);
BimaAttribute * 	bima_attribute_copy	(BimaAttribute * self);
void 	bima_attribute_write_to_xml	(BimaAttribute * self,
					FILE * ofile);
BimaAttribute * 	bima_attribute_new	(void);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define BIMA_ATTRIBUTE_PROP_ID(arg)    	"id", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_ID(arg)	"id", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ATTRIBUTE_PROP_NAME(arg)    	"name", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_NAME(arg)	"name", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ATTRIBUTE_PROP_TITLE(arg)    	"title", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_TITLE(arg)	"title", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ATTRIBUTE_PROP_NOT_NULL(arg)    	"not_null", __extension__ ({gboolean z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_NOT_NULL(arg)	"not_null", __extension__ ({gboolean *z = (arg); z;})
#define BIMA_ATTRIBUTE_PROP_FIELD_TYPE(arg)    	"field_type", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_FIELD_TYPE(arg)	"field_type", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ATTRIBUTE_PROP_LENGTH(arg)    	"length", __extension__ ({gint z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_LENGTH(arg)	"length", __extension__ ({gint *z = (arg); z;})
#define BIMA_ATTRIBUTE_PROP_CONTROL_TYPE(arg)    	"control_type", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_CONTROL_TYPE(arg)	"control_type", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ATTRIBUTE_PROP_PARAMETER(arg)    	"parameter", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_PARAMETER(arg)	"parameter", __extension__ ({gchar **z = (arg); z;})
#define BIMA_ATTRIBUTE_PROP_DESCRIPTION(arg)    	"description", __extension__ ({gchar *z = (arg); z;})
#define BIMA_ATTRIBUTE_GET_PROP_DESCRIPTION(arg)	"description", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define BIMA_ATTRIBUTE_PROP_ID(arg)    	"id",(gchar *)(arg)
#define BIMA_ATTRIBUTE_GET_PROP_ID(arg)	"id",(gchar **)(arg)
#define BIMA_ATTRIBUTE_PROP_NAME(arg)    	"name",(gchar *)(arg)
#define BIMA_ATTRIBUTE_GET_PROP_NAME(arg)	"name",(gchar **)(arg)
#define BIMA_ATTRIBUTE_PROP_TITLE(arg)    	"title",(gchar *)(arg)
#define BIMA_ATTRIBUTE_GET_PROP_TITLE(arg)	"title",(gchar **)(arg)
#define BIMA_ATTRIBUTE_PROP_NOT_NULL(arg)    	"not_null",(gboolean )(arg)
#define BIMA_ATTRIBUTE_GET_PROP_NOT_NULL(arg)	"not_null",(gboolean *)(arg)
#define BIMA_ATTRIBUTE_PROP_FIELD_TYPE(arg)    	"field_type",(gchar *)(arg)
#define BIMA_ATTRIBUTE_GET_PROP_FIELD_TYPE(arg)	"field_type",(gchar **)(arg)
#define BIMA_ATTRIBUTE_PROP_LENGTH(arg)    	"length",(gint )(arg)
#define BIMA_ATTRIBUTE_GET_PROP_LENGTH(arg)	"length",(gint *)(arg)
#define BIMA_ATTRIBUTE_PROP_CONTROL_TYPE(arg)    	"control_type",(gchar *)(arg)
#define BIMA_ATTRIBUTE_GET_PROP_CONTROL_TYPE(arg)	"control_type",(gchar **)(arg)
#define BIMA_ATTRIBUTE_PROP_PARAMETER(arg)    	"parameter",(gchar *)(arg)
#define BIMA_ATTRIBUTE_GET_PROP_PARAMETER(arg)	"parameter",(gchar **)(arg)
#define BIMA_ATTRIBUTE_PROP_DESCRIPTION(arg)    	"description",(gchar *)(arg)
#define BIMA_ATTRIBUTE_GET_PROP_DESCRIPTION(arg)	"description",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif