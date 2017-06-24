#ifndef _QUOTE_PARSER_HPP
#define _QUOTE_PARSER_HPP


class QuoteParser {
    private:
        class QuoteParserState;
        class PString;
    
    protected:
        QuoteParserState *state;
        PString *buffer;

    public:
        QuoteParser();
        
        virtual void event(char c);
        virtual ~QuoteParser() { delete buffer; }
};

#endif /* _QUOTE_PARSER_HPP */