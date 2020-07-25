<?php

namespace lang_tools_protocol;


// includes
require_once __DIR__.'/../basic_parser/html_helper.php';
require_once 'str_helper.php';

// enums

function to_html_header__lang_e( $r )
{
    return array( 'LANG_E' );
}

function to_html__lang_e( $r )
{
    return to_string__lang_e( $r ) . " (" . $r . ")";
}

// objects

// base messages

// messages

// generic

function to_html( $obj )
{
    $handler_map = array(
        // objects
        // messages
    );

    $type = get_class( $obj );

    if( array_key_exists( $type, $handler_map ) )
    {
        $func = '\\lang_tools_protocol\\' . $handler_map[ $type ];
        return $func( $obj );
    }

    return NULL;
}

# namespace_end lang_tools_protocol


?>
