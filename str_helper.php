<?php

namespace lang_tools;


// includes
require_once __DIR__.'/../basic_parser/str_helper.php';

// enums

function to_string__lang_e( $r )
{
    $map = array
    (
        lang_e__UNDEF => 'UNDEF',
        lang_e__AB => 'AB',
        lang_e__AA => 'AA',
        lang_e__AF => 'AF',
        lang_e__AK => 'AK',
        lang_e__SQ => 'SQ',
        lang_e__AM => 'AM',
        lang_e__AR => 'AR',
        lang_e__AN => 'AN',
        lang_e__HY => 'HY',
        lang_e__AS => 'AS',
        lang_e__AV => 'AV',
        lang_e__AZ => 'AZ',
        lang_e__BM => 'BM',
        lang_e__BA => 'BA',
        lang_e__BE => 'BE',
        lang_e__BN => 'BN',
        lang_e__BH => 'BH',
        lang_e__BI => 'BI',
        lang_e__BS => 'BS',
        lang_e__BR => 'BR',
        lang_e__BG => 'BG',
        lang_e__MY => 'MY',
        lang_e__CA => 'CA',
        lang_e__CH => 'CH',
        lang_e__CE => 'CE',
        lang_e__NY => 'NY',
        lang_e__ZH => 'ZH',
        lang_e__CV => 'CV',
        lang_e__KW => 'KW',
        lang_e__CO => 'CO',
        lang_e__CR => 'CR',
        lang_e__HR => 'HR',
        lang_e__CS => 'CS',
        lang_e__DA => 'DA',
        lang_e__DV => 'DV',
        lang_e__NL => 'NL',
        lang_e__DZ => 'DZ',
        lang_e__EN => 'EN',
        lang_e__ET => 'ET',
        lang_e__EE => 'EE',
        lang_e__FO => 'FO',
        lang_e__FJ => 'FJ',
        lang_e__FI => 'FI',
        lang_e__FR => 'FR',
        lang_e__FF => 'FF',
        lang_e__GL => 'GL',
        lang_e__KA => 'KA',
        lang_e__DE => 'DE',
        lang_e__EL => 'EL',
        lang_e__GN => 'GN',
        lang_e__HT => 'HT',
        lang_e__HZ => 'HZ',
        lang_e__HO => 'HO',
        lang_e__HU => 'HU',
        lang_e__ID => 'ID',
        lang_e__GA => 'GA',
        lang_e__IG => 'IG',
        lang_e__IK => 'IK',
        lang_e__IO => 'IO',
        lang_e__IS => 'IS',
        lang_e__IT => 'IT',
        lang_e__JV => 'JV',
        lang_e__KL => 'KL',
        lang_e__KN => 'KN',
        lang_e__KR => 'KR',
        lang_e__KK => 'KK',
        lang_e__KM => 'KM',
        lang_e__KI => 'KI',
        lang_e__KY => 'KY',
        lang_e__KV => 'KV',
        lang_e__KG => 'KG',
        lang_e__LB => 'LB',
        lang_e__LG => 'LG',
        lang_e__LI => 'LI',
        lang_e__LN => 'LN',
        lang_e__LO => 'LO',
        lang_e__LT => 'LT',
        lang_e__LUB => 'LUB',
        lang_e__LV => 'LV',
        lang_e__GV => 'GV',
        lang_e__MK => 'MK',
        lang_e__MG => 'MG',
        lang_e__ML => 'ML',
        lang_e__MT => 'MT',
        lang_e__MI => 'MI',
        lang_e__MH => 'MH',
        lang_e__MN => 'MN',
        lang_e__NA => 'NA',
        lang_e__NV => 'NV',
        lang_e__ND => 'ND',
        lang_e__NE => 'NE',
        lang_e__NB => 'NB',
        lang_e__NN => 'NN',
        lang_e__NO => 'NO',
        lang_e__II => 'II',
        lang_e__NR => 'NR',
        lang_e__OC => 'OC',
        lang_e__OJ => 'OJ',
        lang_e__OM => 'OM',
        lang_e__OR => 'OR',
        lang_e__OS => 'OS',
        lang_e__PI => 'PI',
        lang_e__PL => 'PL',
        lang_e__PT => 'PT',
        lang_e__QU => 'QU',
        lang_e__RM => 'RM',
        lang_e__RO => 'RO',
        lang_e__RU => 'RU',
        lang_e__SC => 'SC',
        lang_e__SM => 'SM',
        lang_e__SG => 'SG',
        lang_e__SR => 'SR',
        lang_e__GD => 'GD',
        lang_e__SN => 'SN',
        lang_e__SI => 'SI',
        lang_e__SK => 'SK',
        lang_e__SL => 'SL',
        lang_e__SO => 'SO',
        lang_e__ST => 'ST',
        lang_e__ES => 'ES',
        lang_e__SU => 'SU',
        lang_e__SW => 'SW',
        lang_e__SS => 'SS',
        lang_e__SV => 'SV',
        lang_e__TA => 'TA',
        lang_e__TE => 'TE',
        lang_e__TH => 'TH',
        lang_e__TI => 'TI',
        lang_e__BO => 'BO',
        lang_e__TK => 'TK',
        lang_e__TL => 'TL',
        lang_e__TN => 'TN',
        lang_e__TO => 'TO',
        lang_e__TR => 'TR',
        lang_e__TS => 'TS',
        lang_e__TY => 'TY',
        lang_e__UK => 'UK',
        lang_e__VE => 'VE',
        lang_e__VI => 'VI',
        lang_e__WA => 'WA',
        lang_e__CY => 'CY',
        lang_e__WO => 'WO',
        lang_e__FY => 'FY',
        lang_e__XH => 'XH',
        lang_e__YO => 'YO',
        lang_e__ZA => 'ZA',
        lang_e__ZU => 'ZU',
    );

    if( array_key_exists( $r, $map ) )
    {
        return $map[ $r ];
    }

    return '?';
}

// objects

// base messages

// messages

// generic

function to_string( $obj )
{
    $handler_map = array(
        // objects
        // messages
    );

    $type = get_class( $obj );

    if( array_key_exists( $type, $handler_map ) )
    {
        $func = '\\lang_tools\\' . $handler_map[ $type ];
        return $func( $obj );
    }

    return NULL;
}

# namespace_end lang_tools


?>
