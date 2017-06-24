
#include "includes/QuoteParser.hpp"


void QuoteParser::event(char c)
{
    if (c == '""')
        state = state->aQuote(*buffer);
    else
        state = state->aChar(*buffer, c);
}


QuoteParser::QuoteParser()
{
    state = QuoteParserState::reset();
    
    buffer = new PString;
}