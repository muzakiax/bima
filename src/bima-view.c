/* Generated by GOB (v2.0.13)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 13

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "bima-view.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */
/* self casting macros */
#define SELF(x) BIMA_VIEW(x)
#define SELF_CONST(x) BIMA_VIEW_CONST(x)
#define IS_SELF(x) BIMA_IS_VIEW(x)
#define TYPE_SELF BIMA_TYPE_VIEW
#define SELF_CLASS(x) BIMA_VIEW_CLASS(x)

#define SELF_GET_CLASS(x) BIMA_VIEW_GET_CLASS(x)

/* self typedefs */
typedef BimaView Self;
typedef BimaViewClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void bima_view_init (BimaView * o) G_GNUC_UNUSED;
static void bima_view_class_init (BimaViewClass * c) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_ID,
	PROP_NAME,
	PROP_TITLE,
	PROP_PRIMARY_OBJ_ID,
	PROP_DESCRIPTION,
	PROP_SQL_TEXT
};

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#define self_get_id bima_view_get_id
#define self_set_id bima_view_set_id
#define self_get_name bima_view_get_name
#define self_set_name bima_view_set_name
#define self_get_title bima_view_get_title
#define self_set_title bima_view_set_title
#define self_get_primary_obj_id bima_view_get_primary_obj_id
#define self_set_primary_obj_id bima_view_set_primary_obj_id
#define self_get_description bima_view_get_description
#define self_set_description bima_view_set_description
#define self_get_sql_text bima_view_get_sql_text
#define self_set_sql_text bima_view_set_sql_text
#define self_new bima_view_new
GType
bima_view_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (BimaViewClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) bima_view_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (BimaView),
			0 /* n_preallocs */,
			(GInstanceInitFunc) bima_view_init,
			NULL
		};

		type = g_type_register_static (G_TYPE_OBJECT, "BimaView", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((BimaView *)g_object_new(bima_view_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static BimaView * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static BimaView *
GET_NEW_VARG (const char *first, ...)
{
	BimaView *ret;
	va_list ap;
	va_start (ap, first);
	ret = (BimaView *)g_object_new_valist (bima_view_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Bima:View::finalize"
	BimaView *self G_GNUC_UNUSED = BIMA_VIEW (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 5 "view.gob"
	if(self->id) { g_free ((gpointer) self->id); self->id = NULL; }
#line 121 "bima-view.c"
#line 14 "view.gob"
	if(self->name) { g_free ((gpointer) self->name); self->name = NULL; }
#line 124 "bima-view.c"
#line 24 "view.gob"
	if(self->title) { g_free ((gpointer) self->title); self->title = NULL; }
#line 127 "bima-view.c"
#line 34 "view.gob"
	if(self->primary_obj_id) { g_free ((gpointer) self->primary_obj_id); self->primary_obj_id = NULL; }
#line 130 "bima-view.c"
#line 44 "view.gob"
	if(self->description) { g_free ((gpointer) self->description); self->description = NULL; }
#line 133 "bima-view.c"
#line 54 "view.gob"
	if(self->sql_text) { g_free ((gpointer) self->sql_text); self->sql_text = NULL; }
#line 136 "bima-view.c"
}
#undef __GOB_FUNCTION__

static void 
bima_view_init (BimaView * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Bima:View::init"
#line 4 "view.gob"
	o->id =  NULL ;
#line 146 "bima-view.c"
#line 13 "view.gob"
	o->name =  NULL ;
#line 149 "bima-view.c"
#line 23 "view.gob"
	o->title =  NULL ;
#line 152 "bima-view.c"
#line 33 "view.gob"
	o->primary_obj_id =  NULL ;
#line 155 "bima-view.c"
#line 43 "view.gob"
	o->description =  NULL ;
#line 158 "bima-view.c"
#line 53 "view.gob"
	o->sql_text =  NULL ;
#line 161 "bima-view.c"
}
#undef __GOB_FUNCTION__
static void 
bima_view_class_init (BimaViewClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Bima:View::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_string
		("id" /* name */,
		 "id" /* nick */,
		 "id of view" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_ID,
		param_spec);
	param_spec = g_param_spec_string
		("name" /* name */,
		 "name" /* nick */,
		 "name of view" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_NAME,
		param_spec);
	param_spec = g_param_spec_string
		("title" /* name */,
		 "title" /* nick */,
		 "title of view" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_TITLE,
		param_spec);
	param_spec = g_param_spec_string
		("primary_obj_id" /* name */,
		 "primary_obj_id" /* nick */,
		 "id of obj" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_PRIMARY_OBJ_ID,
		param_spec);
	param_spec = g_param_spec_string
		("description" /* name */,
		 "description" /* nick */,
		 "description of view" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_DESCRIPTION,
		param_spec);
	param_spec = g_param_spec_string
		("sql_text" /* name */,
		 "sql_text" /* nick */,
		 "sql_text of view" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_SQL_TEXT,
		param_spec);
    }
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "Bima:View::set_property"
{
	BimaView *self G_GNUC_UNUSED;

	self = BIMA_VIEW (object);

	switch (property_id) {
	case PROP_ID:
		{
#line 6 "view.gob"
{ char *old = self->id; self->id = g_value_dup_string (VAL); g_free (old); }
#line 252 "bima-view.c"
		}
		break;
	case PROP_NAME:
		{
#line 15 "view.gob"
{ char *old = self->name; self->name = g_value_dup_string (VAL); g_free (old); }
#line 259 "bima-view.c"
		}
		break;
	case PROP_TITLE:
		{
#line 25 "view.gob"
{ char *old = self->title; self->title = g_value_dup_string (VAL); g_free (old); }
#line 266 "bima-view.c"
		}
		break;
	case PROP_PRIMARY_OBJ_ID:
		{
#line 35 "view.gob"
{ char *old = self->primary_obj_id; self->primary_obj_id = g_value_dup_string (VAL); g_free (old); }
#line 273 "bima-view.c"
		}
		break;
	case PROP_DESCRIPTION:
		{
#line 45 "view.gob"
{ char *old = self->description; self->description = g_value_dup_string (VAL); g_free (old); }
#line 280 "bima-view.c"
		}
		break;
	case PROP_SQL_TEXT:
		{
#line 55 "view.gob"
{ char *old = self->sql_text; self->sql_text = g_value_dup_string (VAL); g_free (old); }
#line 287 "bima-view.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "Bima:View::get_property"
{
	BimaView *self G_GNUC_UNUSED;

	self = BIMA_VIEW (object);

	switch (property_id) {
	case PROP_ID:
		{
#line 6 "view.gob"
g_value_set_string (VAL, self->id);
#line 318 "bima-view.c"
		}
		break;
	case PROP_NAME:
		{
#line 15 "view.gob"
g_value_set_string (VAL, self->name);
#line 325 "bima-view.c"
		}
		break;
	case PROP_TITLE:
		{
#line 25 "view.gob"
g_value_set_string (VAL, self->title);
#line 332 "bima-view.c"
		}
		break;
	case PROP_PRIMARY_OBJ_ID:
		{
#line 35 "view.gob"
g_value_set_string (VAL, self->primary_obj_id);
#line 339 "bima-view.c"
		}
		break;
	case PROP_DESCRIPTION:
		{
#line 45 "view.gob"
g_value_set_string (VAL, self->description);
#line 346 "bima-view.c"
		}
		break;
	case PROP_SQL_TEXT:
		{
#line 55 "view.gob"
g_value_set_string (VAL, self->sql_text);
#line 353 "bima-view.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__



#line 6 "view.gob"
gchar * 
bima_view_get_id (BimaView * self)
#line 373 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::get_id"
{
#line 6 "view.gob"
		gchar* val; g_object_get (G_OBJECT (self), "id", &val, NULL); return val;
}}
#line 380 "bima-view.c"
#undef __GOB_FUNCTION__

#line 6 "view.gob"
void 
bima_view_set_id (BimaView * self, gchar * val)
#line 386 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::set_id"
{
#line 6 "view.gob"
		g_object_set (G_OBJECT (self), "id", val, NULL);
}}
#line 393 "bima-view.c"
#undef __GOB_FUNCTION__

#line 15 "view.gob"
gchar * 
bima_view_get_name (BimaView * self)
#line 399 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::get_name"
{
#line 15 "view.gob"
		gchar* val; g_object_get (G_OBJECT (self), "name", &val, NULL); return val;
}}
#line 406 "bima-view.c"
#undef __GOB_FUNCTION__

#line 15 "view.gob"
void 
bima_view_set_name (BimaView * self, gchar * val)
#line 412 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::set_name"
{
#line 15 "view.gob"
		g_object_set (G_OBJECT (self), "name", val, NULL);
}}
#line 419 "bima-view.c"
#undef __GOB_FUNCTION__

#line 25 "view.gob"
gchar * 
bima_view_get_title (BimaView * self)
#line 425 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::get_title"
{
#line 25 "view.gob"
		gchar* val; g_object_get (G_OBJECT (self), "title", &val, NULL); return val;
}}
#line 432 "bima-view.c"
#undef __GOB_FUNCTION__

#line 25 "view.gob"
void 
bima_view_set_title (BimaView * self, gchar * val)
#line 438 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::set_title"
{
#line 25 "view.gob"
		g_object_set (G_OBJECT (self), "title", val, NULL);
}}
#line 445 "bima-view.c"
#undef __GOB_FUNCTION__

#line 35 "view.gob"
gchar * 
bima_view_get_primary_obj_id (BimaView * self)
#line 451 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::get_primary_obj_id"
{
#line 35 "view.gob"
		gchar* val; g_object_get (G_OBJECT (self), "primary_obj_id", &val, NULL); return val;
}}
#line 458 "bima-view.c"
#undef __GOB_FUNCTION__

#line 35 "view.gob"
void 
bima_view_set_primary_obj_id (BimaView * self, gchar * val)
#line 464 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::set_primary_obj_id"
{
#line 35 "view.gob"
		g_object_set (G_OBJECT (self), "primary_obj_id", val, NULL);
}}
#line 471 "bima-view.c"
#undef __GOB_FUNCTION__

#line 45 "view.gob"
gchar * 
bima_view_get_description (BimaView * self)
#line 477 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::get_description"
{
#line 45 "view.gob"
		gchar* val; g_object_get (G_OBJECT (self), "description", &val, NULL); return val;
}}
#line 484 "bima-view.c"
#undef __GOB_FUNCTION__

#line 45 "view.gob"
void 
bima_view_set_description (BimaView * self, gchar * val)
#line 490 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::set_description"
{
#line 45 "view.gob"
		g_object_set (G_OBJECT (self), "description", val, NULL);
}}
#line 497 "bima-view.c"
#undef __GOB_FUNCTION__

#line 55 "view.gob"
gchar * 
bima_view_get_sql_text (BimaView * self)
#line 503 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::get_sql_text"
{
#line 55 "view.gob"
		gchar* val; g_object_get (G_OBJECT (self), "sql_text", &val, NULL); return val;
}}
#line 510 "bima-view.c"
#undef __GOB_FUNCTION__

#line 55 "view.gob"
void 
bima_view_set_sql_text (BimaView * self, gchar * val)
#line 516 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::set_sql_text"
{
#line 55 "view.gob"
		g_object_set (G_OBJECT (self), "sql_text", val, NULL);
}}
#line 523 "bima-view.c"
#undef __GOB_FUNCTION__

#line 63 "view.gob"
BimaView * 
bima_view_new (void)
#line 529 "bima-view.c"
{
#define __GOB_FUNCTION__ "Bima:View::new"
{
#line 65 "view.gob"
	
		return GET_NEW;
	}}
#line 537 "bima-view.c"
#undef __GOB_FUNCTION__