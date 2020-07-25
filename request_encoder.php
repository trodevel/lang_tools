<?php

namespace lang_tools;


// includes
require_once __DIR__.'/../basic_parser/request_encoder.php';

// enums

function to_generic_request__lang_e( $prefix, $r )
{
    $res = \basic_parser\to_generic_request__int( $prefix, $r );

    return $res;
}

// objects

// base messages

// messages

// generic

function to_generic_request( $obj )
{
    $handler_map = array(
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
