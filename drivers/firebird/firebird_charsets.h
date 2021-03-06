#ifndef __FIREBIRD_CHARSET_H
#define __FIREBIRD_CHARSET_H

static const char firebird_encoding_hash[][20] = {
	/* from , to */
	"NONE","US-ASCII",
	"ASCII","US-ASCII", 
	"ASCII7", "US-ASCII",
	"USASCII", "US-ASCII",
	"DOS437", "US-ASCII", 
	"DOS_437", "",
	"BIG_5", "Big5", 
	"BIG5, , ", "Big5", 
	"WIN_950", "Big5", 
	"DOS_950", "Big5", 
	"DOS737", "latin-greek", 
	"DOS_737", "latin-greek", 
	"DOS775", "ISO-8859-7", 
	"DOS850", "ISO-8859-1", 
	"LATIN1", "ISO-8859-1", 
	"DOS_850", "ISO-8859-1", 
	"DOS852", "ISO-8859-2",
	"LATIN2", "ISO-8859-2",
	"DOS_852", "ISO-8859-2", 
	"DOS857", "IBM857", 
	"DOS_857", "IBM857", 
	"DOS858", "", //Latin1 + euro
	"DOS_858", "", 	//Latin1 + euro
	"DOS860", "PT", 
	"DOS_860", "PT", 
	"DOS861", "ISO-8859-1", //Icelandic ? 
	"DOS_861", "ISO-8859-1", //Icelandic ? 
 	"DOS862", "ISO-8859-8", 
	"DOS_862", "ISO-8859-8", 
	"DOS863", "ISO646-FR", 
	"DOS_863", "ISO646-FR", 	
	"DOS864", "ISO-8859-6", 
	"DOS_864", "ISO-8859-6", 
	"DOS865", "ISO_8859-1",
	"DOS_865", "ISO_8859-1", 
	"DOS866", "", // Russian
	"DOS_866", "", // Russian
	"DOS869", "ISO-8859-7", 
	"DOS_869", "ISO-8859-7", 
	"EUCJ_0208", "", 
	"EUCJ", "ISO-10646-J-1", 
	"GB_2312", "", //simplified Chinese (Hong Kong, PRC) 
	"DOS_936", "", //simplified Chinese (Hong Kong, PRC) 
	"WIN_936", "", //simplified Chinese (Hong Kong, PRC) 
	"GB2312", "", //simplified Chinese (Hong Kong, PRC) 
	"ISO8859_1", "ISO-8859-1", 
	"ISO8859_2", "ISO-8859-2", 
	"ISO-8859-2", "ISO-8859-2", 
	"LATIN2", "ISO-8859-2", 
	"ISO88592", "ISO-8859-2", 
	"ISO8859_3", "ISO-8859-3", 
	"ISO-8859-3", "ISO-8859-3", 
	"LATIN3", "ISO-8859-3", 
	"ISO88593", "ISO-8859-3", 
	"ISO8859_4", "ISO-8859-4", 
	"ISO-8859-4", "ISO-8859-4", 
	"LATIN4", "ISO-8859-4", 
	"ISO88594", "ISO-8859-4", 
	"ISO8859_6", "ISO-8859-6", 
	"ISO-8859-6", "ISO-8859-6", 
	"ISO8859_7", "ISO-8859-7", 
	"ISO-8859-7", "ISO-8859-7", 
	"ISO88597", "ISO-8859-7", 
	"ISO8859_8", "ISO-8859-8", 
	"ISO-8859-8", "ISO-8859-8", 
	"ISO88598", "ISO-8859-8", 
	"ISO8859_9", "ISO-8859-9", 
	"ISO-8859-9", "ISO-8859-9", 
	"LATIN5", "ISO-8859-9", 
	"ISO88599", "ISO-8859-9", 
	"ISO8859_13", "ISO-8859-13", 
	"ISO-8859-13", "ISO-8859-13", 
	"LATIN7", "ISO-8859-13", 
	"ISO885913", "ISO-8859-13", 
	"KSC_5601", "iso-ir-149", 
	"OS_949", "iso-ir-149", 
	"WIN_949", "iso-ir-149", 
	"KSC5601", "iso-ir-149", 
	"OCTETS", "", 
	"BINARY", "", 
	"SJIS_0208", "Shift_JIS", 
	"SJIS", "Shift_JIS", 
	"UNICODE_FSS", "UTF-8", 
	"SQL_TEXT", "UTF-8", 
	"UTF_FSS", "UTF-8", 
	"UTF-8", "UTF-8", 
	"UTF8", "UTF-8", 
	"WIN1250", "windows-1250", 
	"WIN_1250", "windows-1250", 
	"WIN1251", "windows-1251", 
	"WIN_1251", "windows-1251", 
	"WIN1252", "windows-1252", 
	"WIN_1252", "windows-1252", 
	"WIN1253", "windows-1253", 
	"WIN_1253", "windows-1253", 
	"WIN1254", "windows-1254", 
	"WIN_1254", "windows-1254", 
	"WIN1255", "windows-1255", 
	"WIN_1255", "windows-1255", 
	"WIN1256", "windows-1256", 
	"WIN_1256", "windows-1256", 
	"WIN1257", "windows-1257", 
	"WIN_1257", "windows-1257",  
	"", ""
};


#endif /* __FIREBIRD_CHARSET_H */
