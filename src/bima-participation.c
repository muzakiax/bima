/* Generated by GOB (v2.0.13)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 13

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "bima-participation.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */
/* self casting macros */
#define SELF(x) BIMA_PARTICIPATION(x)
#define SELF_CONST(x) BIMA_PARTICIPATION_CONST(x)
#define IS_SELF(x) BIMA_IS_PARTICIPATION(x)
#define TYPE_SELF BIMA_TYPE_PARTICIPATION
#define SELF_CLASS(x) BIMA_PARTICIPATION_CLASS(x)

#define SELF_GET_CLASS(x) BIMA_PARTICIPATION_GET_CLASS(x)

/* self typedefs */
typedef BimaParticipation Self;
typedef BimaParticipationClass SelfClass;

/* here are local prototypes */
static void bima_participation_init (BimaParticipation * o) G_GNUC_UNUSED;
static void bima_participation_class_init (BimaParticipationClass * c) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#define self_new bima_participation_new
GType
bima_participation_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (BimaParticipationClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) bima_participation_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (BimaParticipation),
			0 /* n_preallocs */,
			(GInstanceInitFunc) bima_participation_init,
			NULL
		};

		type = g_type_register_static (G_TYPE_OBJECT, "BimaParticipation", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((BimaParticipation *)g_object_new(bima_participation_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static BimaParticipation * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static BimaParticipation *
GET_NEW_VARG (const char *first, ...)
{
	BimaParticipation *ret;
	va_list ap;
	va_start (ap, first);
	ret = (BimaParticipation *)g_object_new_valist (bima_participation_get_type (), first, ap);
	va_end (ap);
	return ret;
}

static void 
bima_participation_init (BimaParticipation * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Bima:Participation::init"
#line 3 "participation.gob"
	o->is_total = FALSE;
#line 93 "bima-participation.c"
}
#undef __GOB_FUNCTION__
static void 
bima_participation_class_init (BimaParticipationClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Bima:Participation::class_init"

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

}
#undef __GOB_FUNCTION__



#line 14 "participation.gob"
BimaParticipation * 
bima_participation_new (void)
#line 111 "bima-participation.c"
{
#define __GOB_FUNCTION__ "Bima:Participation::new"
{
#line 16 "participation.gob"
	
		return GET_NEW;
	}}
#line 119 "bima-participation.c"
#undef __GOB_FUNCTION__