<?php

namespace lang_tools;


// includes
require_once __DIR__.'/../basic_parser/parser.php';

// enums

function parse__lang_e( & $csv_arr, & $offset )
{
    $res = \basic_parser\parse__int( $csv_arr, $offset );

    return $res;
}

// objects

// base messages

// messages

// generic

class Parser extends \basic_parser\Parser
{

protected static function parse_csv_array( $csv_arr )
{
    if( sizeof( $csv_arr ) < 1 )
        return self::create_parse_error();

    $handler_map = array(
        // messages
    );

    $type = $csv_arr[0][0];

    if( array_key_exists( $type, $handler_map ) )
    {
        $func = '\\lang_tools\\' . $handler_map[ $type ];
        return $func( $csv_arr[0] );
    }

    return NULL;
}

}

# namespace_end lang_tools


?>
