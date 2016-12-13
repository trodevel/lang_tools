/*

Parser.

Copyright (C) 2014 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 5245 $ $Date:: 2016-12-14 #$ $Author: serge $

#include "parser.h"                 // self

#include <map>

NAMESPACE_LANG_TOOLS_START

#define TUPLE_VAL_STR(_x_)  _x_,#_x_
#define TUPLE_STR_VAL(_x_)  #_x_,_x_

template< typename _M, typename _U, typename _V >
void insert_inverse_pair( _M & map, _U first, _V second )
{
    map.insert( typename _M::value_type( second, first ) );
}

lang_e to_lang( const std::string & s )
{
    typedef std::map< std::string, lang_e > Map;
    static Map m;
    if( m.empty() )
    {
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( UNDEF ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( DE ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( EN ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( RU ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( FR ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( IT ) );
        insert_inverse_pair( m, lang_e:: TUPLE_VAL_STR( ES ) );
    }

    if( 0 == m.count( s ) )
        return lang_e::UNDEF;

    return m[s];
}

/*
Abkhaz;ab;abk
Afar;aa;aar
Afrikaans;af;afr
Akan;ak;aka
Albanian;sq;sqi
Amharic;am;amh
Arabic;ar;ara
Aragonese;an;arg
Armenian;hy;hye
Assamese;as;asm
Avaric;av;ava
Azerbaijani;az;aze
Bambara;bm;bam
Bashkir;ba;bak
Belarusian;be;bel
Bengali, Bangla;bn;ben
Bihari;bh;bih
Bislama;bi;bis
Bosnian ;bs;bos
Breton;br;bre
Bulgarian;bg;bul
Burmese ;my;mya
Catalan;ca;cat
Chamorro;ch;cha
Chechen;ce;che
Chichewa, Chewa, Nyanja;ny;nya
Chinese;zh;
Chuvash;cv;chv
Cornish;kw;cor
Corsican;co;cos
Cree;cr;cre
Croatian;hr;hrv
Czech;cs;ces
Danish;da;dan
Divehi, Dhivehi, Maldivian;left;
Dutch;nl;nld
Dzongkha;dz;dzo
English;en;eng
Estonian;et;est
Ewe;ee;ewe
Faroese;fo;fao
Fijian;fj;fij
Finnish;fi;fin
French;fr;fra
Fula, Fulah, Pulaar, Pular;ff;ful
Galician;gl;glg
Georgian;ka;kat
German;de;deu
Greek (modern);el;ell
Guaraní;gn;grn
Haitian, Haitian Creole;ht;hat
Herero;hz;her
Hiri Motu;ho;hmo
Hungarian;hu;hun
Indonesian;id;ind
Irish;ga;gle
Igbo;ig;ibo
Inupiaq;ik;ipk
Ido;io;ido
Icelandic;is;isl
Italian;it;ita
Javanese;jv;jav
Kalaallisut, Greenlandic;kl;kal
Kannada;kn;kan
Kanuri;kr;kau
Kazakh;kk;kaz
Khmer;km;khm
Kikuyu, Gikuyu;ki;kik
Kyrgyz;ky;kir
Komi;kv;kom
Kongo;kg;kon
Luxembourgish, Letzeburgesch;lb;ltz
Ganda;lg;lug
Limburgish, Limburgan, Limburger;li;lim
Lingala;ln;lin
Lao;lo;lao
Lithuanian;lt;lit
Luba-Katanga;lub;lub
Latvian;lv;lav
Manx;gv;glv
Macedonian;mk;mkd
Malagasy;mg;mlg
Malayalam;ml;mal
Maltese;mt;mlt
Māori;mi;mri
Marshallese;mh;mah
Mongolian;mn;mon
Nauruan;na;nau
Navajo, Navaho;nv;nav
Northern Ndebele;nd;nde
Nepali;ne;nep
Norwegian Bokmål;nb;nob
Norwegian Nynorsk;nn;nno
Norwegian;no;nor
Nuosu;ii;iii
Southern Ndebele;nr;nbl
Occitan;oc;oci
Ojibwe, Ojibwa;oj;oji
Oromo;om;orm
Oriya;or;ori
Ossetian, Ossetic;os;oss
Pāli;pi;pli
Polish;pl;pol
Portuguese;pt;por
Quechua;qu;que
Romansh;rm;roh
Romanian;ro;ron
Russian;ru;rus
Sardinian;sc;srd
Samoan;sm;smo
Sango;sg;sag
Serbian;sr;srp
Scottish Gaelic, Gaelic;gd;gla
Shona;sn;sna
Sinhalese, Sinhala;si;sin
Slovak;sk;slk
Slovene;sl;slv
Somali;so;som
Southern Sotho;st;sot
Spanish;es;spa
Sundanese;su;sun
Swahili;sw;swa
Swati;ss;ssw
Swedish;sv;swe
Tamil;ta;tam
Telugu;te;tel
Thai;th;tha
Tigrinya;ti;tir
Tibetan Standard, Tibetan, Central;bo;bod
Turkmen;tk;tuk
Tagalog;tl;tgl
Tswana;tn;tsn
Tonga (Tonga Islands);to;ton
Turkish;tr;tur
Tsonga;ts;tso
Tahitian;ty;tah
Ukrainian;uk;ukr
Venda;ve;ven
Vietnamese;vi;vie
Walloon;wa;wln
Welsh;cy;cym
Wolof;wo;wol
Western Frisian;fy;fry
Xhosa;xh;xho
Yoruba;yo;yor
Zhuang, Chuang;za;zha
Zulu;zu;zul
*/


// https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes
lang_e to_lang_iso( const std::string & s )
{
    typedef std::map< std::string, lang_e > Map;
    static Map m =
    {
        { "en", lang_e::EN },
        { "de", lang_e::DE },
        { "ru", lang_e::RU },
        { "fr", lang_e::FR },
        { "it", lang_e::IT },
        { "es", lang_e::ES },
    };

    auto it = m.find( s );

    if( it == m.end() )
        return lang_e::UNDEF;

    return it->second;
}


NAMESPACE_LANG_TOOLS_END
