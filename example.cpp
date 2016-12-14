#include <iostream>

#include "str_helper.h" // to_string
#include "parser.h"     // to_lang

void test_to_string( lang_tools::lang_e l )
{
    std::cout << "language " << lang_tools::to_string( l ) << ", " << lang_tools::to_string_iso( l ) << std::endl;
}

void test_to_lang( const std::string & s )
{
    std::cout << "string " << s << ", parsed and converted " << lang_tools::to_string( lang_tools::to_lang( s ) ) << std::endl;
}

void test_to_lang_iso( const std::string & s )
{
    std::cout << "iso string " << s << ", parsed and converted " << lang_tools::to_string( lang_tools::to_lang_iso( s ) ) << std::endl;
}

int main()
{
    test_to_string( lang_tools::lang_e::EN );
    test_to_string( lang_tools::lang_e::DE );
    test_to_string( lang_tools::lang_e::RU );

    test_to_lang( "XXX" );
    test_to_lang( "EN" );
    test_to_lang( "DE" );
    test_to_lang( "RU" );

    test_to_lang_iso( "XXX" );
    test_to_lang_iso( "en" );
    test_to_lang_iso( "de" );
    test_to_lang_iso( "ru" );

    return 0;
}
