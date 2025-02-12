#include <iconv.h>
#include <map>

#include "sysdeps.h"

// From http://www.unicode.org/Public/MAPPINGS/VENDORS/APPLE/ROMAN.TXT
std::map<uint8, uint16> MACROMAN_TO_UNICODE = {
    {0x80, 0x00C4}, // LATIN CAPITAL LETTER A WITH DIAERESIS
    {0x81, 0x00C5}, // LATIN CAPITAL LETTER A WITH RING ABOVE
    {0x82, 0x00C7}, // LATIN CAPITAL LETTER C WITH CEDILLA
    {0x83, 0x00C9}, // LATIN CAPITAL LETTER E WITH ACUTE
    {0x84, 0x00D1}, // LATIN CAPITAL LETTER N WITH TILDE
    {0x85, 0x00D6}, // LATIN CAPITAL LETTER O WITH DIAERESIS
    {0x86, 0x00DC}, // LATIN CAPITAL LETTER U WITH DIAERESIS
    {0x87, 0x00E1}, // LATIN SMALL LETTER A WITH ACUTE
    {0x88, 0x00E0}, // LATIN SMALL LETTER A WITH GRAVE
    {0x89, 0x00E2}, // LATIN SMALL LETTER A WITH CIRCUMFLEX
    {0x8A, 0x00E4}, // LATIN SMALL LETTER A WITH DIAERESIS
    {0x8B, 0x00E3}, // LATIN SMALL LETTER A WITH TILDE
    {0x8C, 0x00E5}, // LATIN SMALL LETTER A WITH RING ABOVE
    {0x8D, 0x00E7}, // LATIN SMALL LETTER C WITH CEDILLA
    {0x8E, 0x00E9}, // LATIN SMALL LETTER E WITH ACUTE
    {0x8F, 0x00E8}, // LATIN SMALL LETTER E WITH GRAVE
    {0x90, 0x00EA}, // LATIN SMALL LETTER E WITH CIRCUMFLEX
    {0x91, 0x00EB}, // LATIN SMALL LETTER E WITH DIAERESIS
    {0x92, 0x00ED}, // LATIN SMALL LETTER I WITH ACUTE
    {0x93, 0x00EC}, // LATIN SMALL LETTER I WITH GRAVE
    {0x94, 0x00EE}, // LATIN SMALL LETTER I WITH CIRCUMFLEX
    {0x95, 0x00EF}, // LATIN SMALL LETTER I WITH DIAERESIS
    {0x96, 0x00F1}, // LATIN SMALL LETTER N WITH TILDE
    {0x97, 0x00F3}, // LATIN SMALL LETTER O WITH ACUTE
    {0x98, 0x00F2}, // LATIN SMALL LETTER O WITH GRAVE
    {0x99, 0x00F4}, // LATIN SMALL LETTER O WITH CIRCUMFLEX
    {0x9A, 0x00F6}, // LATIN SMALL LETTER O WITH DIAERESIS
    {0x9B, 0x00F5}, // LATIN SMALL LETTER O WITH TILDE
    {0x9C, 0x00FA}, // LATIN SMALL LETTER U WITH ACUTE
    {0x9D, 0x00F9}, // LATIN SMALL LETTER U WITH GRAVE
    {0x9E, 0x00FB}, // LATIN SMALL LETTER U WITH CIRCUMFLEX
    {0x9F, 0x00FC}, // LATIN SMALL LETTER U WITH DIAERESIS
    {0xA0, 0x2020}, // DAGGER
    {0xA1, 0x00B0}, // DEGREE SIGN
    {0xA2, 0x00A2}, // CENT SIGN
    {0xA3, 0x00A3}, // POUND SIGN
    {0xA4, 0x00A7}, // SECTION SIGN
    {0xA5, 0x2022}, // BULLET
    {0xA6, 0x00B6}, // PILCROW SIGN
    {0xA7, 0x00DF}, // LATIN SMALL LETTER SHARP S
    {0xA8, 0x00AE}, // REGISTERED SIGN
    {0xA9, 0x00A9}, // COPYRIGHT SIGN
    {0xAA, 0x2122}, // TRADE MARK SIGN
    {0xAB, 0x00B4}, // ACUTE ACCENT
    {0xAC, 0x00A8}, // DIAERESIS
    {0xAD, 0x2260}, // NOT EQUAL TO
    {0xAE, 0x00C6}, // LATIN CAPITAL LETTER AE
    {0xAF, 0x00D8}, // LATIN CAPITAL LETTER O WITH STROKE
    {0xB0, 0x221E}, // INFINITY
    {0xB1, 0x00B1}, // PLUS-MINUS SIGN
    {0xB2, 0x2264}, // LESS-THAN OR EQUAL TO
    {0xB3, 0x2265}, // GREATER-THAN OR EQUAL TO
    {0xB4, 0x00A5}, // YEN SIGN
    {0xB5, 0x00B5}, // MICRO SIGN
    {0xB6, 0x2202}, // PARTIAL DIFFERENTIAL
    {0xB7, 0x2211}, // N-ARY SUMMATION
    {0xB8, 0x220F}, // N-ARY PRODUCT
    {0xB9, 0x03C0}, // GREEK SMALL LETTER PI
    {0xBA, 0x222B}, // INTEGRAL
    {0xBB, 0x00AA}, // FEMININE ORDINAL INDICATOR
    {0xBC, 0x00BA}, // MASCULINE ORDINAL INDICATOR
    {0xBD, 0x03A9}, // GREEK CAPITAL LETTER OMEGA
    {0xBE, 0x00E6}, // LATIN SMALL LETTER AE
    {0xBF, 0x00F8}, // LATIN SMALL LETTER O WITH STROKE
    {0xC0, 0x00BF}, // INVERTED QUESTION MARK
    {0xC1, 0x00A1}, // INVERTED EXCLAMATION MARK
    {0xC2, 0x00AC}, // NOT SIGN
    {0xC3, 0x221A}, // SQUARE ROOT
    {0xC4, 0x0192}, // LATIN SMALL LETTER F WITH HOOK
    {0xC5, 0x2248}, // ALMOST EQUAL TO
    {0xC6, 0x2206}, // INCREMENT
    {0xC7, 0x00AB}, // LEFT-POINTING DOUBLE ANGLE QUOTATION MARK
    {0xC8, 0x00BB}, // RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK
    {0xC9, 0x2026}, // HORIZONTAL ELLIPSIS
    {0xCA, 0x00A0}, // NO-BREAK SPACE
    {0xCB, 0x00C0}, // LATIN CAPITAL LETTER A WITH GRAVE
    {0xCC, 0x00C3}, // LATIN CAPITAL LETTER A WITH TILDE
    {0xCD, 0x00D5}, // LATIN CAPITAL LETTER O WITH TILDE
    {0xCE, 0x0152}, // LATIN CAPITAL LIGATURE OE
    {0xCF, 0x0153}, // LATIN SMALL LIGATURE OE
    {0xD0, 0x2013}, // EN DASH
    {0xD1, 0x2014}, // EM DASH
    {0xD2, 0x201C}, // LEFT DOUBLE QUOTATION MARK
    {0xD3, 0x201D}, // RIGHT DOUBLE QUOTATION MARK
    {0xD4, 0x2018}, // LEFT SINGLE QUOTATION MARK
    {0xD5, 0x2019}, // RIGHT SINGLE QUOTATION MARK
    {0xD6, 0x00F7}, // DIVISION SIGN
    {0xD7, 0x25CA}, // LOZENGE
    {0xD8, 0x00FF}, // LATIN SMALL LETTER Y WITH DIAERESIS
    {0xD9, 0x0178}, // LATIN CAPITAL LETTER Y WITH DIAERESIS
    {0xDA, 0x2044}, // FRACTION SLASH
    {0xDB, 0x20AC}, // EURO SIGN
    {0xDC, 0x2039}, // SINGLE LEFT-POINTING ANGLE QUOTATION MARK
    {0xDD, 0x203A}, // SINGLE RIGHT-POINTING ANGLE QUOTATION MARK
    {0xDE, 0xFB01}, // LATIN SMALL LIGATURE FI
    {0xDF, 0xFB02}, // LATIN SMALL LIGATURE FL
    {0xE0, 0x2021}, // DOUBLE DAGGER
    {0xE1, 0x00B7}, // MIDDLE DOT
    {0xE2, 0x201A}, // SINGLE LOW-9 QUOTATION MARK
    {0xE3, 0x201E}, // DOUBLE LOW-9 QUOTATION MARK
    {0xE4, 0x2030}, // PER MILLE SIGN
    {0xE5, 0x00C2}, // LATIN CAPITAL LETTER A WITH CIRCUMFLEX
    {0xE6, 0x00CA}, // LATIN CAPITAL LETTER E WITH CIRCUMFLEX
    {0xE7, 0x00C1}, // LATIN CAPITAL LETTER A WITH ACUTE
    {0xE8, 0x00CB}, // LATIN CAPITAL LETTER E WITH DIAERESIS
    {0xE9, 0x00C8}, // LATIN CAPITAL LETTER E WITH GRAVE
    {0xEA, 0x00CD}, // LATIN CAPITAL LETTER I WITH ACUTE
    {0xEB, 0x00CE}, // LATIN CAPITAL LETTER I WITH CIRCUMFLEX
    {0xEC, 0x00CF}, // LATIN CAPITAL LETTER I WITH DIAERESIS
    {0xED, 0x00CC}, // LATIN CAPITAL LETTER I WITH GRAVE
    {0xEE, 0x00D3}, // LATIN CAPITAL LETTER O WITH ACUTE
    {0xEF, 0x00D4}, // LATIN CAPITAL LETTER O WITH CIRCUMFLEX
    {0xF0, 0xF8FF}, // Apple logo
    {0xF1, 0x00D2}, // LATIN CAPITAL LETTER O WITH GRAVE
    {0xF2, 0x00DA}, // LATIN CAPITAL LETTER U WITH ACUTE
    {0xF3, 0x00DB}, // LATIN CAPITAL LETTER U WITH CIRCUMFLEX
    {0xF4, 0x00D9}, // LATIN CAPITAL LETTER U WITH GRAVE
    {0xF5, 0x0131}, // LATIN SMALL LETTER DOTLESS I
    {0xF6, 0x02C6}, // MODIFIER LETTER CIRCUMFLEX ACCENT
    {0xF7, 0x02DC}, // SMALL TILDE
    {0xF8, 0x00AF}, // MACRON
    {0xF9, 0x02D8}, // BREVE
    {0xFA, 0x02D9}, // DOT ABOVE
    {0xFB, 0x02DA}, // RING ABOVE
    {0xFC, 0x00B8}, // CEDILLA
    {0xFD, 0x02DD}, // DOUBLE ACUTE ACCENT
    {0xFE, 0x02DB}, // OGONEK
    {0xFF, 0x02C7}, // CARON
};

std::map<uint16, uint8> UNICODE_TO_MACROMAN;

const char *utf8_to_macroman(const char *utf8, size_t utf8_len)
{
	// Emscripten's version of iconv does not have support for MACROMAN,
	// so decode to UTF_16LE (to make traversal easier) and then do the lookup.
	iconv_t iconv_cd = iconv_open("UTF_16LE", "UTF-8");
	if (iconv_cd == (iconv_t) -1) {
		printf("Could not get UTF-8 -> UTF_16LE conversion descriptor\n");
		return utf8;
	}

	char *utf8_in = const_cast<char *>(utf8);
	size_t utf8_in_len = utf8_len;
	size_t utf16_len = utf8_len * 2; // upper bound
	uint16 *utf16 = (uint16 *)malloc(utf16_len);
	char *utf16_out = reinterpret_cast<char *>(utf16);
	size_t utf16_out_len = utf16_len;
	if (iconv(iconv_cd, &utf8_in, &utf8_in_len, &utf16_out, &utf16_out_len) == -1) {
		printf("Could not run UTF-8 -> UTF-16 conversion for %s\n", utf8);
    	iconv_close(iconv_cd);
        free(utf16);
        return utf8;
	}
	utf16_len -= utf16_out_len;
	iconv_close(iconv_cd);

    // In theory we should use a lock to make sure multiple threads are not
    // doing the lazy initialization, but in practice all extfs access happens
    // from a single thread.
	if (UNICODE_TO_MACROMAN.empty()) {
        for (const auto& kv : MACROMAN_TO_UNICODE) {
            UNICODE_TO_MACROMAN[kv.second] = kv.first;
        }
	}

	size_t macroman_len = utf16_len / 2;
	char *macroman = (char *)malloc(macroman_len + 1);
	for (int i = 0 ; i < macroman_len; i++) {
		uint16 c = utf16[i];
		if (c < 127) {
			macroman[i] = c;
		} else {
			auto it = UNICODE_TO_MACROMAN.find(c);
			if (it != UNICODE_TO_MACROMAN.end()) {
				macroman[i] = it->second;
			} else {
				macroman[i] = '_';
			}
		}
	}
	macroman[macroman_len] = '\0';

	free(utf16);
	return macroman;
}

const char *macroman_to_utf8(const char *macroman, size_t macroman_len) {
	iconv_t iconv_cd = iconv_open("UTF-8", "UTF_16LE");
	if (iconv_cd == (iconv_t) -1) {
		printf("Could not get UTF_16LE -> UTF-8 conversion descriptor\n");
		return macroman;
	}

	size_t utf16_len = macroman_len * 2; // upper bound
	uint16 *utf16 = (uint16 *)malloc(utf16_len);
	for (int i = 0 ; i < macroman_len; i++) {
		uint8 c = macroman[i];
		if (c < 127) {
			utf16[i] = c;
		} else {
			auto it = MACROMAN_TO_UNICODE.find(c);
			if (it != MACROMAN_TO_UNICODE.end()) {
				utf16[i] = it->second;
			} else {
				utf16[i] = '_';
			}
		}
	}

	char *utf16_in = reinterpret_cast<char *>(utf16);
	size_t utf16_in_len = utf16_len;
	size_t utf8_len = macroman_len * 3; // upper bound
	char *utf8 = (char *)malloc(utf8_len + 1);
	size_t utf8_out_len = utf8_len;
	char *utf8_out = utf8;
	if (iconv(iconv_cd, &utf16_in, &utf16_in_len, &utf8_out, &utf8_out_len) == -1) {
		printf("Could not run UTF-16 -> UTF-8 conversion for %s\n", macroman);
    	iconv_close(iconv_cd);
        free(utf16);
        free(utf8);
        return macroman;
	}
	utf8_len -= utf8_out_len;
	iconv_close(iconv_cd);

	utf8[utf8_len] = '\0';
	free(utf16);

	return utf8;
}
