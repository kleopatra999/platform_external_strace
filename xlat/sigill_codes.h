/* Generated by ./xlat/gen.sh from ./xlat/sigill_codes.in; do not edit. */
#if !(defined(ILL_ILLOPC) || (defined(HAVE_DECL_ILL_ILLOPC) && HAVE_DECL_ILL_ILLOPC))
# define ILL_ILLOPC 1
#endif
#if !(defined(ILL_ILLOPN) || (defined(HAVE_DECL_ILL_ILLOPN) && HAVE_DECL_ILL_ILLOPN))
# define ILL_ILLOPN 2
#endif
#if !(defined(ILL_ILLADR) || (defined(HAVE_DECL_ILL_ILLADR) && HAVE_DECL_ILL_ILLADR))
# define ILL_ILLADR 3
#endif
#if !(defined(ILL_ILLTRP) || (defined(HAVE_DECL_ILL_ILLTRP) && HAVE_DECL_ILL_ILLTRP))
# define ILL_ILLTRP 4
#endif
#if !(defined(ILL_PRVOPC) || (defined(HAVE_DECL_ILL_PRVOPC) && HAVE_DECL_ILL_PRVOPC))
# define ILL_PRVOPC 5
#endif
#if !(defined(ILL_PRVREG) || (defined(HAVE_DECL_ILL_PRVREG) && HAVE_DECL_ILL_PRVREG))
# define ILL_PRVREG 6
#endif
#if !(defined(ILL_COPROC) || (defined(HAVE_DECL_ILL_COPROC) && HAVE_DECL_ILL_COPROC))
# define ILL_COPROC 7
#endif
#if !(defined(ILL_BADSTK) || (defined(HAVE_DECL_ILL_BADSTK) && HAVE_DECL_ILL_BADSTK))
# define ILL_BADSTK 8
#endif

#ifdef IN_MPERS

extern const struct xlat sigill_codes[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat sigill_codes[] = {
 XLAT(ILL_ILLOPC),
 XLAT(ILL_ILLOPN),
 XLAT(ILL_ILLADR),
 XLAT(ILL_ILLTRP),
 XLAT(ILL_PRVOPC),
 XLAT(ILL_PRVREG),
 XLAT(ILL_COPROC),
 XLAT(ILL_BADSTK),
 XLAT_END
};

#endif /* !IN_MPERS */