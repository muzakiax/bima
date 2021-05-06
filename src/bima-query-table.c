/* Generated by GOB (v2.0.13)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 13

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "bima-query-table.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */
/* self casting macros */
#define SELF(x) BIMA_QUERY_TABLE(x)
#define SELF_CONST(x) BIMA_QUERY_TABLE_CONST(x)
#define IS_SELF(x) BIMA_IS_QUERY_TABLE(x)
#define TYPE_SELF BIMA_TYPE_QUERY_TABLE
#define SELF_CLASS(x) BIMA_QUERY_TABLE_CLASS(x)

#define SELF_GET_CLASS(x) BIMA_QUERY_TABLE_GET_CLASS(x)

/* self typedefs */
typedef BimaQueryTable Self;
typedef BimaQueryTableClass SelfClass;

/* here are local prototypes */
static void bima_query_table_init (BimaQueryTable * o) G_GNUC_UNUSED;
static void bima_query_table_class_init (BimaQueryTableClass * c) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#define self_get_entity_alias bima_query_table_get_entity_alias
#define self_validate_field bima_query_table_validate_field
#define self_count_number_of_fields bima_query_table_count_number_of_fields
#define self_get_nth_attribute bima_query_table_get_nth_attribute
#define self_get_str bima_query_table_get_str
#define self_new bima_query_table_new
GType
bima_query_table_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (BimaQueryTableClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) bima_query_table_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (BimaQueryTable),
			0 /* n_preallocs */,
			(GInstanceInitFunc) bima_query_table_init,
			NULL
		};

		type = g_type_register_static (G_TYPE_OBJECT, "BimaQueryTable", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((BimaQueryTable *)g_object_new(bima_query_table_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static BimaQueryTable * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static BimaQueryTable *
GET_NEW_VARG (const char *first, ...)
{
	BimaQueryTable *ret;
	va_list ap;
	va_start (ap, first);
	ret = (BimaQueryTable *)g_object_new_valist (bima_query_table_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Bima:Query:Table::finalize"
	BimaQueryTable *self G_GNUC_UNUSED = BIMA_QUERY_TABLE (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 52 "query-table.gob"
	if(self->alias) { g_free ((gpointer) self->alias); self->alias = NULL; }
#line 102 "bima-query-table.c"
#line 63 "query-table.gob"
	if(self->table) { g_free ((gpointer) self->table); self->table = NULL; }
#line 105 "bima-query-table.c"
#define sub_query (self->sub_query)
#define VAR sub_query
	{
#line 74 "query-table.gob"
	 
			if (!sub_query) 
				return ;
			g_object_unref((GObject *) sub_query);
			sub_query = NULL;
		}
#line 116 "bima-query-table.c"
	memset(&sub_query, 0, sizeof(sub_query));
#undef VAR
#undef sub_query
#define join_rule (self->join_rule)
#define VAR join_rule
	{
#line 84 "query-table.gob"
	 
			if (!join_rule) 
				return ;
			g_object_unref((GObject *) join_rule);
			join_rule = NULL;
		}
#line 130 "bima-query-table.c"
	memset(&join_rule, 0, sizeof(join_rule));
#undef VAR
#undef join_rule
#define left_table (self->left_table)
#define VAR left_table
	{
#line 92 "query-table.gob"
	 
			if (!left_table) 
				return ;
			g_object_unref((GObject *) left_table);
			left_table = NULL;
		}
#line 144 "bima-query-table.c"
	memset(&left_table, 0, sizeof(left_table));
#undef VAR
#undef left_table
#define right_table (self->right_table)
#define VAR right_table
	{
#line 100 "query-table.gob"
	 
			if (!right_table) 
				return ;
			g_object_unref((GObject *) right_table);
			right_table = NULL;
		}
#line 158 "bima-query-table.c"
	memset(&right_table, 0, sizeof(right_table));
#undef VAR
#undef right_table
#define entity (self->entity)
#define VAR entity
	{
#line 108 "query-table.gob"
	 
			entity = NULL;
		}
#line 169 "bima-query-table.c"
	memset(&entity, 0, sizeof(entity));
#undef VAR
#undef entity
}
#undef __GOB_FUNCTION__

static void 
bima_query_table_init (BimaQueryTable * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Bima:Query:Table::init"
#line 30 "query-table.gob"
	o->num_fields = 0;
#line 182 "bima-query-table.c"
#line 51 "query-table.gob"
	o->alias =  NULL ;
#line 185 "bima-query-table.c"
#line 62 "query-table.gob"
	o->table =  NULL ;
#line 188 "bima-query-table.c"
#line 73 "query-table.gob"
	o->sub_query = NULL;
#line 191 "bima-query-table.c"
#line 74 "query-table.gob"
	o->join_type = 0;
#line 194 "bima-query-table.c"
#line 83 "query-table.gob"
	o->join_rule = NULL;
#line 197 "bima-query-table.c"
#line 91 "query-table.gob"
	o->left_table = NULL;
#line 200 "bima-query-table.c"
#line 99 "query-table.gob"
	o->right_table = NULL;
#line 203 "bima-query-table.c"
#line 107 "query-table.gob"
	o->entity = NULL;
#line 206 "bima-query-table.c"
}
#undef __GOB_FUNCTION__
static void 
bima_query_table_class_init (BimaQueryTableClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Bima:Query:Table::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

	g_object_class->finalize = ___finalize;
}
#undef __GOB_FUNCTION__



#line 112 "query-table.gob"
gchar * 
bima_query_table_get_entity_alias (BimaQueryTable * self, BimaEntity * entity)
#line 226 "bima-query-table.c"
{
#define __GOB_FUNCTION__ "Bima:Query:Table::get_entity_alias"
#line 112 "query-table.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 112 "query-table.gob"
	g_return_val_if_fail (BIMA_IS_QUERY_TABLE (self), (gchar * )0);
#line 233 "bima-query-table.c"
{
#line 114 "query-table.gob"
	
		gchar *ostr=NULL;
		
		if (self->entity || self->table ) {
			if ( self->entity == entity ) {
				if (self->alias) 
					return self->alias;
				else 
					return self->table;
			}
		} 
		else if (self->sub_query) {
			ostr =  bima_query_get_entity_alias(self->sub_query, entity);
			if (ostr)
				return self->alias ;
		}
		else { 
			if (self->left_table) 
				ostr = bima_query_table_get_entity_alias(self->left_table, entity);	
			if (!ostr && self->right_table)
				ostr = bima_query_table_get_entity_alias(self->left_table, entity);	
		}
		return ostr;
	}}
#line 260 "bima-query-table.c"
#undef __GOB_FUNCTION__

#line 139 "query-table.gob"
BimaAttribute * 
bima_query_table_validate_field (BimaQueryTable * self, BimaQueryField * qfield)
#line 266 "bima-query-table.c"
{
#define __GOB_FUNCTION__ "Bima:Query:Table::validate_field"
#line 139 "query-table.gob"
	g_return_val_if_fail (self != NULL, (BimaAttribute * )0);
#line 139 "query-table.gob"
	g_return_val_if_fail (BIMA_IS_QUERY_TABLE (self), (BimaAttribute * )0);
#line 273 "bima-query-table.c"
{
#line 141 "query-table.gob"
	
		GList *list=NULL;
		BimaQueryField *sqfield;
		BimaAttribute *attribute = NULL;
		BimaForeignKey *fk = NULL;
		gchar *name=NULL;
		 
		if (self->join_type == 0) {
			if (self->table) {
				if (self->alias) {
					if (!g_ascii_strcasecmp(qfield->table,self->alias)) {
						attribute = (BimaAttribute *) bima_get_object_by_prop(((BimaEntity *)(self->entity))->attributes , "name", qfield->field);
						// find if attribute as foreign attribute
						if ( (attribute == NULL) && BIMA_IS_ENTITY(self->entity) &&  ((BimaEntity *)(self->entity))->foreign_attr) {
							for (list=g_list_first(((BimaEntity *)(self->entity))->foreign_attr);list != NULL; list = list->next){
								if (list->data) {
									fk = (BimaForeignKey *) list->data;

									// foreign attr in database table is fk->name + "_" + attr->name
									// we have to remove fk->name + "_"
									if (name != NULL) 
										g_free(name);
										 
									if ( g_utf8_strlen(qfield->field,-1) >  g_utf8_strlen(fk->name,-1)) {
										name = g_strdup(qfield->field + g_utf8_strlen(fk->name,-1) + 1);
									} else {
										name = g_strdup(qfield->field);
									}
									attribute = (BimaAttribute *) bima_get_object_by_prop( bima_relation_get_attributes(fk->relation) , "name", name);
								}
							}
						}
						// find if attribute as foreign key attribute
						if ( (attribute == NULL) &&  ((BimaEntity *)(self->entity))->foreign_key) {
							for (list=g_list_first(((BimaEntity *)(self->entity))->foreign_key);list != NULL; list = list->next){
								if (list->data) {
									fk = (BimaForeignKey *) list->data;
									// foreign attr in database table is fk->name + "_" + attr->name
									// we have to remove fk->name + "_"
									if (name != NULL) 
										g_free(name);
										 
									if ( g_utf8_strlen(qfield->field,-1) >  g_utf8_strlen(fk->name,-1)) {
										name = g_strdup(qfield->field + g_utf8_strlen(fk->name,-1) + 1);
									} else {
										name = g_strdup(qfield->field);
									}
									attribute = (BimaAttribute *) bima_get_object_by_prop( bima_relation_get_attributes(fk->relation) , "name", name);
								}
							}
						}
					}

				} else {
					if (!g_ascii_strcasecmp(qfield->table,self->table)) {
						attribute = (BimaAttribute *) bima_get_object_by_prop(((BimaEntity *)(self->entity))->attributes , "name", qfield->field);
						// find if attribute as foreign attribute
						if ( (attribute == NULL) && BIMA_IS_ENTITY(self->entity) &&  ((BimaEntity *)(self->entity))->foreign_attr) {
							for (list=g_list_first(((BimaEntity *)(self->entity))->foreign_attr);list != NULL; list = list->next){
								if (list->data) {
									fk = (BimaForeignKey *) list->data;
									// foreign attr in database table is fk->name + "_" + attr->name
									// we have to remove fk->name + "_"
									if (name != NULL) 
										g_free(name);
										 
									if ( g_utf8_strlen(qfield->field,-1) >  g_utf8_strlen(fk->name,-1)) {
										name = g_strdup(qfield->field + g_utf8_strlen(fk->name,-1) + 1);
									} else {
										name = g_strdup(qfield->field);
									}
									attribute = (BimaAttribute *) bima_get_object_by_prop( bima_relation_get_attributes(fk->relation) , "name", name);
								}
							}
						}
						// find if attribute as foreign key attribute
						if ( (attribute == NULL) &&  ((BimaEntity *)(self->entity))->foreign_key) {
							for (list=g_list_first(((BimaEntity *)(self->entity))->foreign_key);list != NULL; list = list->next){
								if (list->data) {
									fk = (BimaForeignKey *) list->data;
									// foreign attr in database table is fk->name + "_" + attr->name
									// we have to remove fk->name + "_"
									if (name != NULL) 
										g_free(name);
										 
									if ( g_utf8_strlen(qfield->field,-1) >  g_utf8_strlen(fk->name,-1)) {
										name = g_strdup(qfield->field + g_utf8_strlen(fk->name,-1) + 1);
									} else {
										name = g_strdup(qfield->field);
									}
									attribute = (BimaAttribute *) bima_get_object_by_prop( bima_relation_get_attributes(fk->relation) , "name", name);
								}
							}
						}
					}
				}
			} 
			else if (self->sub_query) {
				attribute = bima_query_get_attribute_sub_query(self->sub_query, qfield);
			}
		}
		else {
			if (self->left_table)
				attribute = bima_query_table_validate_field(self->right_table,qfield);
			if (self->right_table && (!attribute))
				attribute = bima_query_table_validate_field(self->right_table,qfield);
		}
		return attribute;
	}}
#line 385 "bima-query-table.c"
#undef __GOB_FUNCTION__

#line 251 "query-table.gob"
gint 
bima_query_table_count_number_of_fields (BimaQueryTable * self, gchar * star_tbl)
#line 391 "bima-query-table.c"
{
#define __GOB_FUNCTION__ "Bima:Query:Table::count_number_of_fields"
#line 251 "query-table.gob"
	g_return_val_if_fail (self != NULL, (gint )0);
#line 251 "query-table.gob"
	g_return_val_if_fail (BIMA_IS_QUERY_TABLE (self), (gint )0);
#line 398 "bima-query-table.c"
{
#line 253 "query-table.gob"
	
		//GList *attr_list;
		gint n_field ;
		
		n_field = 0 ;	
		if (self->join_type == 0) {
			if ((star_tbl == NULL) || 
				((star_tbl != NULL) && (self->alias != NULL) && (!g_ascii_strcasecmp(star_tbl, self->alias))) ||
				((star_tbl != NULL) && (self->alias == NULL) && (self->table != NULL) && (!g_ascii_strcasecmp(star_tbl, self->table))) ) {
				if (self->sub_query == NULL ) {
					
					n_field = ((BimaEntity *) (self->entity))->num_of_attribute;
					n_field += ((BimaEntity *) (self->entity))->num_of_foreign_key;
					if (BIMA_IS_ENTITY(self->entity)) { 
						n_field += ((BimaEntity *) (self->entity))->num_of_foreign_attribute;
						
					}
				} else {
					n_field = bima_query_count_number_of_fields(self->sub_query);
					
				}
				self->num_fields += n_field;
			}	
		} else {
			n_field = bima_query_table_count_number_of_fields(self->left_table, star_tbl);
			n_field += bima_query_table_count_number_of_fields(self->right_table, star_tbl);
		}	
		return n_field;
	}}
#line 430 "bima-query-table.c"
#undef __GOB_FUNCTION__

#line 283 "query-table.gob"
GObject * 
bima_query_table_get_nth_attribute (BimaQueryTable * self, gchar * star_tbl, gint n, gint * nth, BimaQueryTable ** qtbl)
#line 436 "bima-query-table.c"
{
#define __GOB_FUNCTION__ "Bima:Query:Table::get_nth_attribute"
#line 283 "query-table.gob"
	g_return_val_if_fail (self != NULL, (GObject * )0);
#line 283 "query-table.gob"
	g_return_val_if_fail (BIMA_IS_QUERY_TABLE (self), (GObject * )0);
#line 443 "bima-query-table.c"
{
#line 285 "query-table.gob"
	
		GObject *attribute =NULL;
		GList *attr_list;
		BimaEntity *entity;
		gint i, n_fatrr;
		// kl bukan inner join dan sejenisnya ...
		if (self->join_type == 0) {
			// cek jika aliasnya berkesesuaian jika a.* atau * saja
			if ((star_tbl == NULL) || 
				((star_tbl != NULL) && (self->alias != NULL) && (!g_ascii_strcasecmp(star_tbl, self->alias))) ||
				((star_tbl != NULL) && (self->alias == NULL) && (self->table != NULL) && (!g_ascii_strcasecmp(star_tbl, self->table))) ) {
				// kl bkn sub query
				if (self->sub_query == NULL ) {
					entity = (BimaEntity *) (self->entity);
					if (BIMA_IS_ENTITY(self->entity)) 
						n_fatrr = entity->num_of_foreign_attribute;
					else
						n_fatrr = 0;
						
					if ( n >= ((*nth) + entity->num_of_attribute + entity->num_of_foreign_key + n_fatrr )) {
						*nth += entity->num_of_attribute  + entity->num_of_foreign_key + n_fatrr;
						return NULL;
					} else  {
						//if (BIMA_IS_ENTITY(self->entity)) 						
						attribute = bima_entity_get_nth_attribute(entity, n - (*nth)  );
						*nth += (n - (*nth) );
					}
				} else {
					i = bima_query_count_number_of_fields(self->sub_query);
					if ( n >= ( *nth + i)) {
						*nth += i;
						return NULL;
					} else {
						
						attribute = bima_query_get_nth_attribute_sub(self->sub_query,(n - (*nth)));
						*nth += (n - (*nth)  );
					}
				}
			}	
		} else {
			*qtbl = self->left_table;
			attribute = bima_query_table_get_nth_attribute(self->left_table, star_tbl, n, nth,qtbl);
			if ((attribute == NULL) &&  (*nth < n)) {
				*qtbl = self->right_table;
				attribute = bima_query_table_get_nth_attribute(self->right_table, star_tbl, n, nth,qtbl);
			}
		}	
		return attribute;
	}}
#line 495 "bima-query-table.c"
#undef __GOB_FUNCTION__

#line 335 "query-table.gob"
gchar * 
bima_query_table_get_str (BimaQueryTable * self)
#line 501 "bima-query-table.c"
{
#define __GOB_FUNCTION__ "Bima:Query:Table::get_str"
#line 335 "query-table.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 335 "query-table.gob"
	g_return_val_if_fail (BIMA_IS_QUERY_TABLE (self), (gchar * )0);
#line 508 "bima-query-table.c"
{
#line 337 "query-table.gob"
	
		gchar *ostr=NULL;

		if (self->join_type == 0) {
			if (self->table) 
				ostr = g_strdup_printf("%s",self->table);
			else if (self->sub_query) {
				ostr = g_strdup(" ( ");
				ostr = g_strconcat(ostr,bima_query_get_str(self->sub_query),NULL);
				ostr = g_strconcat(ostr," ) ",NULL);
			}
		} 
		else {
			ostr = bima_query_table_get_str(self->left_table);
			switch (self->join_type) {
				case 1:
					ostr = g_strconcat(ostr," INNER JOIN ",NULL);
					break;
				case 2:
					ostr = g_strconcat(ostr," RIGHT OUTER JOIN ",NULL);
					break;
				case 3:
					ostr = g_strconcat(ostr," LEFT OUTER JOIN ",NULL);
					break;			
			}
			ostr = g_strconcat(ostr,bima_query_table_get_str(self->right_table),NULL);
			ostr = g_strconcat(ostr,g_strdup_printf(" ON %s", bima_query_field_get_str(self->join_rule)),NULL);
		}
		if (self->alias) 
			ostr = g_strconcat(ostr, "  ",self->alias,NULL);
		return ostr;	
	}}
#line 543 "bima-query-table.c"
#undef __GOB_FUNCTION__

#line 370 "query-table.gob"
BimaQueryTable * 
bima_query_table_new (void)
#line 549 "bima-query-table.c"
{
#define __GOB_FUNCTION__ "Bima:Query:Table::new"
{
#line 372 "query-table.gob"
	
		return GET_NEW;
	}}
#line 557 "bima-query-table.c"
#undef __GOB_FUNCTION__