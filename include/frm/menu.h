//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
//
// Copyright (C) 2002 - 2016, The pgAdmin Development Team
// This software is released under the PostgreSQL Licence
//
// misc.h - Miscellaneous Utilties
//
//////////////////////////////////////////////////////////////////////////


#ifndef __MENU_H
#define __MENU_H

// Menu options
enum
{
	MNU_ADDSERVER = 101,
	MNU_SAVEDEFINITION,
	MNU_EXIT,
	MNU_SAVEAS_IMAGE_GQB,
	MNU_SAVEAS_IMAGE_EXPLAIN,
	MNU_CONTEXTMENU,
	MNU_SQLPANE,
	MNU_OBJECTBROWSER,
	MNU_TOOLBAR,
	MNU_LIMITBAR,
	MNU_DATABASEBAR,
	MNU_SCRATCHPAD,
	MNU_OUTPUTPANE,
	MNU_DEFAULTVIEW,
	MNU_BACK,
	MNU_FORWARD,
	MNU_REFRESH,

	MNU_ADDCOLUMN,
	MNU_CLOSE,
	MNU_MIN,
	MNU_RECORD,
	MNU_STOP,
	MNU_APPEND,
	MNU_DELETE,
	MNU_OPEN,
	MNU_SAVE,
	MNU_SAVEAS,
	MNU_NEWSQLTAB,
	MNU_EXPORT,
	MNU_OPTIONS,
	MNU_CUT,
	MNU_COPY,
	MNU_INCLUDEFILTER,
	MNU_EXCLUDEFILTER,
	MNU_REMOVEFILTERS,
	MNU_ASCSORT,
	MNU_DESCSORT,
	MNU_REMOVESORT,
	MNU_PASTE,
	MNU_CLEAR,
	MNU_FIND,
	MNU_REPLACE,
	MNU_UNDO,
	MNU_REDO,
	MNU_CANCEL,
	MNU_EXECUTE,
	MNU_EXECUTE_2,
	MNU_EXECFILE,
	MNU_EXPLAIN,
	MNU_EXPLAINANALYZE,
	MNU_EXPLAINOPTIONS,
	MNU_DOCOMMIT,
	MNU_DOROLLBACK,
	MNU_VERBOSE,
	MNU_COSTS,
	MNU_BUFFERS,
	MNU_TIMING,
	MNU_AUTOSELECTQUERY,
	MNU_SUMMARY_COL,
	MNU_COPY_INSERT,
	MNU_COPY_INLIST,
	MNU_COPY_LISTCOLTYPE,
	MNU_COPY_WHERELIST,
	MNU_COPY_TABLEHTML,
	MNU_CLEAR_FILTER,
	MNU_CHECK_COLUMN_DATE,
	MNU_AUTOCOLSPLOT,
	MNU_AUTOROLLBACK,
	MNU_AUTOCOMMIT,
	MNU_CLEARHISTORY,
	MNU_SAVEHISTORY,
	MNU_CHECKALIVE,
	MNU_SELECTALL,
	MNU_EXECPGS,

	MNU_CONTENTS,
	MNU_HELP,
	MNU_HINT,

	MNU_CONFIGSUBMENU,
	MNU_SLONY_SUBMENU,

	MNU_ONLINEUPDATE_NEWDATA,

	MNU_AUTOCOMPLETE,
	MNU_AUTOINDENT,
	MNU_WORDWRAP,
	MNU_SHOWWHITESPACE,
	MNU_SHOWLINEENDS,
	MNU_SHOWLINENUMBER,
	MNU_SHOWINDENTGUIDES,
	MNU_QUICKREPORT,

	MNU_UPPER_CASE,
	MNU_LOWER_CASE,
	MNU_BLOCK_INDENT,
	MNU_BLOCK_OUTDENT,
	MNU_COMMENT_TEXT,
	MNU_UNCOMMENT_TEXT,
	MNU_DOUBLEQUOTE_TEXT,
	MNU_UNDOUBLEQUOTE_TEXT,
	MNU_EXTERNALFORMAT,

	MNU_PLUGINBUTTONLIST,

	MNU_LINEENDS,
	MNU_CR,
	MNU_CRLF,
	MNU_LF,

	MNU_ADDTABLE,
	MNU_DELETETABLE,
	MNU_GENERATEDIAGRAM,
	MNU_GENERATEMODEL,
	MNU_SAVEMODEL,
	MNU_SAVEMODELAS,
	MNU_LOADMODEL,
	MNU_NEWDIAGRAM,
	MNU_DELDIAGRAM,
	MNU_RENDIAGRAM,
	MNU_CHGFONT,
	MNU_TOGGLEDDSQL,
	MNU_TOGGLEMBROWSER,
	MNU_AUTOREPLACE_MANAGE,
	MNU_AUTOEDITOBJECT,
	MNU_RECENT,
	MNU_NEW = MNU_RECENT + 15, // leave space for recent file entries

	MNU_ACTION = MNU_NEW + 1000, // leave space for objects

	MNU_FAVOURITES_ADD = MNU_ACTION + 1000, // leave space for actions
	MNU_FAVOURITES_INJECT,
	MNU_FAVOURITES_MANAGE,

	MNU_MACROS_MANAGE = MNU_FAVOURITES_MANAGE + 1000, //leave space for favourites

	// This is used by the Query Tool - the event is fired when the query completes
	QUERY_COMPLETE = MNU_MACROS_MANAGE + 100,
	PGSCRIPT_COMPLETE,

	// This is a dummy menu item
	MNU_DUMMY = QUERY_COMPLETE + 1000,

	//Menu Test
	MNU_GENERATESQL
};

#endif
