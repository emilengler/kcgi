/*	$Id$ */
/*
 * Copyright (c) 2012, 2014, 2015, 2017 Kristaps Dzonsons <kristaps@bsd.lv>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
#ifndef KCGIHTML_H
#define KCGIHTML_H

#if !defined(__BEGIN_DECLS)
#  ifdef __cplusplus
#  define       __BEGIN_DECLS           extern "C" {
#  else
#  define       __BEGIN_DECLS
#  endif
#endif
#if !defined(__END_DECLS)
#  ifdef __cplusplus
#  define       __END_DECLS             }
#  else
#  define       __END_DECLS
#  endif
#endif

enum	kentity {
	KENTITY_AElig,
	KENTITY_Aacute,
	KENTITY_Acirc,
	KENTITY_Agrave,
	KENTITY_Aring,
	KENTITY_Atilde,
	KENTITY_Auml,
	KENTITY_Ccedil,
	KENTITY_Dagger,
	KENTITY_ETH,
	KENTITY_Eacute,
	KENTITY_Ecirc,
	KENTITY_Egrave,
	KENTITY_Euml,
	KENTITY_Iacute,
	KENTITY_Icirc,
	KENTITY_Igrave,
	KENTITY_Iuml,
	KENTITY_Ntilde,
	KENTITY_OElig,
	KENTITY_Oacute,
	KENTITY_Ocirc,
	KENTITY_Ograve,
	KENTITY_Oslash,
	KENTITY_Otilde,
	KENTITY_Ouml,
	KENTITY_Scaron,
	KENTITY_THORN,
	KENTITY_Uacute,
	KENTITY_Ucirc,
	KENTITY_Ugrave,
	KENTITY_Uuml,
	KENTITY_Yacute,
	KENTITY_Yuml,
	KENTITY_aacute,
	KENTITY_acirc,
	KENTITY_acute,
	KENTITY_aelig,
	KENTITY_agrave,
	KENTITY_amp,
	KENTITY_apos,
	KENTITY_aring,
	KENTITY_atilde,
	KENTITY_auml,
	KENTITY_bdquo,
	KENTITY_brvbar,
	KENTITY_ccedil,
	KENTITY_cedil,
	KENTITY_cent,
	KENTITY_circ,
	KENTITY_copy,
	KENTITY_curren,
	KENTITY_dagger,
	KENTITY_deg,
	KENTITY_divide,
	KENTITY_eacute,
	KENTITY_ecirc,
	KENTITY_egrave,
	KENTITY_emsp,
	KENTITY_ensp,
	KENTITY_eth,
	KENTITY_euml,
	KENTITY_euro,
	KENTITY_frac12,
	KENTITY_frac14,
	KENTITY_frac34,
	KENTITY_gt,
	KENTITY_hellip,
	KENTITY_iacute,
	KENTITY_icirc,
	KENTITY_iexcl,
	KENTITY_igrave,
	KENTITY_iquest,
	KENTITY_iuml,
	KENTITY_laquo,
	KENTITY_ldquo,
	KENTITY_lrm,
	KENTITY_lsaquo,
	KENTITY_lsquo,
	KENTITY_lt,
	KENTITY_macr,
	KENTITY_mdash,
	KENTITY_micro,
	KENTITY_middot,
	KENTITY_nbsp,
	KENTITY_ndash,
	KENTITY_not,
	KENTITY_ntilde,
	KENTITY_oacute,
	KENTITY_ocirc,
	KENTITY_oelig,
	KENTITY_ograve,
	KENTITY_ordf,
	KENTITY_ordm,
	KENTITY_oslash,
	KENTITY_otilde,
	KENTITY_ouml,
	KENTITY_para,
	KENTITY_permil,
	KENTITY_plusmn,
	KENTITY_pound,
	KENTITY_quot,
	KENTITY_raquo,
	KENTITY_rdquo,
	KENTITY_reg,
	KENTITY_rlm,
	KENTITY_rsaquo,
	KENTITY_rsquo,
	KENTITY_sbquo,
	KENTITY_scaron,
	KENTITY_sect,
	KENTITY_shy,
	KENTITY_sup1,
	KENTITY_sup2,
	KENTITY_sup3,
	KENTITY_szlig,
	KENTITY_thinsp,
	KENTITY_thorn,
	KENTITY_tilde,
	KENTITY_times,
	KENTITY_trade,
	KENTITY_uacute,
	KENTITY_ucirc,
	KENTITY_ugrave,
	KENTITY_uml,
	KENTITY_uuml,
	KENTITY_yacute,
	KENTITY_yen,
	KENTITY_yuml,
	KENTITY_zwj,
	KENTITY_zwnj,
	KENTITY__MAX
};

enum	kattr {
	KATTR_ACCEPT_CHARSET,
	KATTR_ACCESSKEY,
	KATTR_ACTION,
	KATTR_ALLOWFULLSCREEN,
	KATTR_ALLOWPAYMENTREQUEST,
	KATTR_ALT,
	KATTR_ASYNC,
	KATTR_AUTOCOMPLETE,
	KATTR_AUTOFOCUS,
	KATTR_AUTOPLAY,
	KATTR_BORDER,
	KATTR_CHALLENGE, /* REMOVE */
	KATTR_CHARSET,
	KATTR_CHECKED,
	KATTR_CITE,
	KATTR_CLASS,
	KATTR_COLS,
	KATTR_COLSPAN,
	KATTR_CONTENT,
	KATTR_CONTENTEDITABLE,
	KATTR_CONTEXTMENU, /* REMOVE */
	KATTR_CONTROLS,
	KATTR_COORDS,
	KATTR_CROSSORIGIN,
	KATTR_DATA,
	KATTR_DATETIME,
	KATTR_DEFAULT,
	KATTR_DEFER,
	KATTR_DIR,
	KATTR_DIRNAME,
	KATTR_DISABLED,
	KATTR_DOWNLOAD,
	KATTR_DRAGGABLE,
	KATTR_DROPZONE, /* REMOVE */
	KATTR_ENCTYPE,
	KATTR_FOR,
	KATTR_FORM,
	KATTR_FORMACTION,
	KATTR_FORMENCTYPE,
	KATTR_FORMMETHOD,
	KATTR_FORMNOVALIDATE,
	KATTR_FORMTARGET,
	KATTR_HEADER, /* REMOVE */
	KATTR_HEADERS,
	KATTR_HEIGHT,
	KATTR_HIDDEN,
	KATTR_HIGH,
	KATTR_HREF,
	KATTR_HREFLANG,
	KATTR_HTTP_EQUIV,
	KATTR_ICON, /* REMOVE */
	KATTR_ID,
	KATTR_ISMAP,
	KATTR_KEYTYPE, /* REMOVE */
	KATTR_KIND,
	KATTR_LABEL,
	KATTR_LANG,
	KATTR_LANGUAGE, /* REMOVE */
	KATTR_LIST,
	KATTR_LONGDESC,
	KATTR_LOOP,
	KATTR_LOW,
	KATTR_MANIFEST,
	KATTR_MAX,
	KATTR_MAXLENGTH,
	KATTR_MEDIA,
	KATTR_MEDIAGROUP, /* REMOVE */
	KATTR_METHOD,
	KATTR_MIN,
	KATTR_MINLENGTH,
	KATTR_MULTIPLE,
	KATTR_MUTED,
	KATTR_NAME,
	KATTR_NONCE,
	KATTR_NOVALIDATE,
	KATTR_ONABORT,
	KATTR_ONAFTERPRINT,
	KATTR_ONAUXCLICK,
	KATTR_ONBEFOREPRINT,
	KATTR_ONBEFOREUNLOAD,
	KATTR_ONBLUR,
	KATTR_ONCANCEL,
	KATTR_ONCANPLAY,
	KATTR_ONCANPLAYTHROUGH,
	KATTR_ONCHANGE,
	KATTR_ONCLICK,
	KATTR_ONCLOSE,
	KATTR_ONCONTEXTMENU,
	KATTR_ONCUECHANGE,
	KATTR_ONCUT,
	KATTR_ONDBLCLICK,
	KATTR_ONDRAG,
	KATTR_ONDRAGEND,
	KATTR_ONDRAGENTER,
	KATTR_ONDRAGEXIT,
	KATTR_ONDRAGLEAVE,
	KATTR_ONDRAGOVER,
	KATTR_ONDRAGSTART,
	KATTR_ONDROP,
	KATTR_ONDURATIONCHANGE,
	KATTR_ONEMPTIED,
	KATTR_ONENDED,
	KATTR_ONERROR,
	KATTR_ONFOCUS,
	KATTR_ONHASHCHANGE,
	KATTR_ONINPUT,
	KATTR_ONINVALID,
	KATTR_ONKEYDOWN,
	KATTR_ONKEYPRESS,
	KATTR_ONKEYUP,
	KATTR_ONLOAD,
	KATTR_ONLOADEDDATA,
	KATTR_ONLOADEDMETADATA,
	KATTR_ONLOADSTART,
	KATTR_ONMESSAGE,
	KATTR_ONMOUSEDOWN,
	KATTR_ONMOUSEENTER,
	KATTR_ONMOUSELEAVE,
	KATTR_ONMOUSEMOVE,
	KATTR_ONMOUSEOUT,
	KATTR_ONMOUSEOVER,
	KATTR_ONMOUSEUP,
	KATTR_ONMOUSEWHEEL, /* REMOVE */
	KATTR_ONOFFLINE,
	KATTR_ONONLINE,
	KATTR_ONPAGEHIDE,
	KATTR_ONPAGESHOW,
	KATTR_ONPASTE,
	KATTR_ONPAUSE,
	KATTR_ONPLAY,
	KATTR_ONPLAYING,
	KATTR_ONPOPSTATE,
	KATTR_ONPROGRESS,
	KATTR_ONRATECHANGE,
	KATTR_ONREADYSTATECHANGE, /* REMOVE */
	KATTR_ONRESET,
	KATTR_ONRESIZE,
	KATTR_ONSCROLL,
	KATTR_ONSEEKED,
	KATTR_ONSEEKING,
	KATTR_ONSELECT,
	KATTR_ONSHOW,
	KATTR_ONSTALLED,
	KATTR_ONSTORAGE,
	KATTR_ONSUBMIT,
	KATTR_ONSUSPEND,
	KATTR_ONTIMEUPDATE,
	KATTR_ONTOGGLE,
	KATTR_ONUNLOAD,
	KATTR_ONVOLUMECHANGE,
	KATTR_ONWAITING,
	KATTR_ONWHEEL,
	KATTR_OPEN,
	KATTR_OPTIMUM,
	KATTR_PATTERN,
	KATTR_PLACEHOLDER,
	KATTR_POSTER,
	KATTR_PRELOAD,
	KATTR_RADIOGROUP, /* REMOVE */
	KATTR_READONLY,
	KATTR_REFERRERPOLICY,
	KATTR_REL,
	KATTR_REQUIRED,
	KATTR_REV,
	KATTR_REVERSED,
	KATTR_ROWS,
	KATTR_ROWSPAN,
	KATTR_SANDBOX,
	KATTR_SCOPE,
	KATTR_SEAMLESS, /* REMOVE */
	KATTR_SELECTED,
	KATTR_SHAPE,
	KATTR_SIZE,
	KATTR_SIZES,
	KATTR_SPAN,
	KATTR_SPELLCHECK,
	KATTR_SRC,
	KATTR_SRCDOC,
	KATTR_SRCLANG,
	KATTR_SRCSET,
	KATTR_START,
	KATTR_STEP,
	KATTR_STYLE,
	KATTR_TABINDEX,
	KATTR_TARGET,
	KATTR_TITLE,
	KATTR_TRANSLATE,
	KATTR_TYPE,
	KATTR_TYPEMUSTMATCH,
	KATTR_USEMAP,
	KATTR_VALUE,
	KATTR_WIDTH,
	KATTR_WRAP,
	KATTR__MAX
};

enum	kelem {
	KELEM_A,
	KELEM_ABBR,
	KELEM_ADDRESS,
	KELEM_AREA,
	KELEM_ARTICLE,
	KELEM_ASIDE,
	KELEM_AUDIO,
	KELEM_B,
	KELEM_BASE,
	KELEM_BDI,
	KELEM_BDO,
	KELEM_BLOCKQUOTE,
	KELEM_BODY,
	KELEM_BR,
	KELEM_BUTTON,
	KELEM_CANVAS,
	KELEM_CAPTION,
	KELEM_CITE,
	KELEM_CODE,
	KELEM_COL,
	KELEM_COLGROUP,
	KELEM_DATALIST,
	KELEM_DD,
	KELEM_DEL,
	KELEM_DETAILS,
	KELEM_DFN,
	KELEM_DIV,
	KELEM_DL,
	KELEM_DOCTYPE,
	KELEM_DT,
	KELEM_EM,
	KELEM_EMBED,
	KELEM_FIELDSET,
	KELEM_FIGCAPTION,
	KELEM_FIGURE,
	KELEM_FOOTER,
	KELEM_FORM,
	KELEM_H1,
	KELEM_H2,
	KELEM_H3,
	KELEM_H4,
	KELEM_H5,
	KELEM_H6,
	KELEM_HEAD,
	KELEM_HEADER,
	KELEM_HGROUP,
	KELEM_HR,
	KELEM_HTML,
	KELEM_I,
	KELEM_IFRAME,
	KELEM_IMG,
	KELEM_INPUT,
	KELEM_INS,
	KELEM_KBD,
	KELEM_KEYGEN,
	KELEM_LABEL,
	KELEM_LEGEND,
	KELEM_LI,
	KELEM_LINK,
	KELEM_MAIN,
	KELEM_MAP,
	KELEM_MARK,
	KELEM_MENU,
	KELEM_META,
	KELEM_METER,
	KELEM_NAV,
	KELEM_NOSCRIPT,
	KELEM_OBJECT,
	KELEM_OL,
	KELEM_OPTGROUP,
	KELEM_OPTION,
	KELEM_OUTPUT,
	KELEM_P,
	KELEM_PARAM,
	KELEM_PRE,
	KELEM_PROGRESS,
	KELEM_Q,
	KELEM_RP,
	KELEM_RT,
	KELEM_RUBY,
	KELEM_S,
	KELEM_SAMP,
	KELEM_SCRIPT,
	KELEM_SECTION,
	KELEM_SELECT,
	KELEM_SMALL,
	KELEM_SOURCE,
	KELEM_SPAN,
	KELEM_STRONG,
	KELEM_STYLE,
	KELEM_SUB,
	KELEM_SUMMARY,
	KELEM_SUP,
	KELEM_TABLE,
	KELEM_TBODY,
	KELEM_TD,
	KELEM_TEXTAREA,
	KELEM_TFOOT,
	KELEM_TH,
	KELEM_THEAD,
	KELEM_TIME,
	KELEM_TITLE,
	KELEM_TR,
	KELEM_TRACK,
	KELEM_U,
	KELEM_UL,
	KELEM_VAR,
	KELEM_VIDEO,
	KELEM_WBR,
	KELEM__MAX
};

/*
 * The maximum number of HTML scopes allowed.
 * Once this has been reached, new scopes will return KCGI_ENOMEM.
 */
#define	KHTML_STACK_MAX	128

struct	khtmlreq {
	void		*arg;
	enum kelem	 elems[KHTML_STACK_MAX];
	size_t		 elemsz;
	int		 newln;
	int		 opts;
#define	KHTML_PRETTY	 0x01
};

__BEGIN_DECLS

enum kcgi_err	 khtml_attr(struct khtmlreq *, enum kelem, ...);
enum kcgi_err	 khtml_attrx(struct khtmlreq *, enum kelem, ...);
enum kcgi_err	 khtml_close(struct khtmlreq *);
enum kcgi_err	 khtml_closeelem(struct khtmlreq *, size_t);
enum kcgi_err	 khtml_closeto(struct khtmlreq *, size_t);
enum kcgi_err	 khtml_double(struct khtmlreq *, double);
enum kcgi_err	 khtml_elem(struct khtmlreq *, enum kelem);
size_t		 khtml_elemat(const struct khtmlreq *);
enum kcgi_err	 khtml_entity(struct khtmlreq *, enum kentity);
enum kcgi_err	 khtml_int(struct khtmlreq *, int64_t);
enum kcgi_err	 khtml_ncr(struct khtmlreq *, uint32_t);
enum kcgi_err 	 khtml_open(struct khtmlreq *, struct kreq *, int);
enum kcgi_err	 khtml_putc(struct khtmlreq *, char);
enum kcgi_err	 khtml_printf(struct khtmlreq *, const char *, ...)
			__attribute__((format(printf, 2, 3)));
enum kcgi_err	 khtml_puts(struct khtmlreq *, const char *);
enum kcgi_err	 khtml_write(const char *, size_t, void *);

__END_DECLS

#endif
