   ServiceDescription^ myServiceDescription = ServiceDescription::Read( "StockQuote_cpp.wsdl" );
   myServiceDescription->Imports->Add( CreateImport( "http://localhost/stockquote/schemas", "http://localhost/stockquote/stockquote_cpp.xsd" ) );