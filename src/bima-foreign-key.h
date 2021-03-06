/* Generated by GOB (v2.0.13)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <stdio.h>

#ifndef __BIMA_FOREIGN_KEY_H__
#define __BIMA_FOREIGN_KEY_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */




typedef enum {
	REL_NONE,
	REL_1TO1,
	REL_1TOM,
	REL_MTO1,
	REL_MTOM
} BimaRelationType;

#ifndef __TYPEDEF_BIMA_RELATION__
#define __TYPEDEF_BIMA_RELATION__
typedef struct _BimaRelation BimaRelation;
#endif


/*
 * Type checking and casting macros
 */
#define BIMA_TYPE_FOREIGN_KEY	(bima_foreign_key_get_type())
#define BIMA_FOREIGN_KEY(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), bima_foreign_key_get_type(), BimaForeignKey)
#define BIMA_FOREIGN_KEY_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), bima_foreign_key_get_type(), BimaForeignKey const)
#define BIMA_FOREIGN_KEY_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), bima_foreign_key_get_type(), BimaForeignKeyClass)
#define BIMA_IS_FOREIGN_KEY(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), bima_foreign_key_get_type ())

#define BIMA_FOREIGN_KEY_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), bima_foreign_key_get_type(), BimaForeignKeyClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_BIMA_FOREIGN_KEY__
#define __TYPEDEF_BIMA_FOREIGN_KEY__
typedef struct _BimaForeignKey BimaForeignKey;
#endif
struct _BimaForeignKey {
	GObject __parent__;
	/*< public >*/
	gchar * pk_obj_id;
	gchar * name;
	BimaRelation * relation;
	BimaRelationType relation_type;
};

/*
 * Class definition
 */
typedef struct _BimaForeignKeyClass BimaForeignKeyClass;
struct _BimaForeignKeyClass {
	GObjectClass __parent__;
};


/*
 * Public methods
 */
GType	bima_foreign_key_get_type	(void);
void 	bima_foreign_key_write_to_xml	(BimaForeignKey * self,
					FILE * ofile);
BimaForeignKey * 	bima_foreign_key_new	(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
