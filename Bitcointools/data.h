#pragma once
#include <string>
#include <vector>
using namespace std;
class Data{
public:
	struct Timestamp {
		struct exchange{
			string id;
			long timeStampLastTrade; // timestamp do ultimo trade de cada exchange
			};
		public:
			long total;//timestamp de atualiza��o do ticker
			vector<exchange> exchanges;
		};
	struct Ticker{
		struct Total{
			double lastPrice; // ultimo pre�o do per�odo em Reais
			double highPrice; // Maior Pre�o do per�odo em Reais
			double lowPrice; // Menor Pre�o em Reais
			double volBTC; // Volume em BTC
			double averagePrice; // Pre�o m�dio em Reais no Per�odo
			int tradesQty; // Quantidade de trades no per�odo
			double money; // Volume em reais no per�odo
			};
		struct exchange{
			string id;// Id da exchange
			double lastPrice; // ultimo pre�o do per�odo em Reais
			double highPrice; // Maior Pre�o do per�odo em Reais
			double lowPrice; // Menor Pre�o em Reais
			double volBTC; // Volume em BTC
			double averagePrice; // Pre�o m�dio em Reais no Per�odo
			int tradesQty; // Quantidade de trades no per�odo
			double money; // Volume em reais no per�odo
			};
		Total total;
		vector<exchange> exchanges;
		};
	// variables
	Timestamp timestamp;
	Ticker ticker24h; // Dados consolidados das ultimas 24h
	Ticker ticker12h; // Dados consolidados das ultimas 12h
	Ticker ticker1h; // Dados consolidados das ultima hora
	enum listaExchanges{BitcoinToYou,Basebit,Bitinvest,flowBTC,Foxbit,LocalBitcoins,MercadoBitcoin,NegocieCoins};
	//<summary>
	//  fun��o para traduzir pela legenda o nome da exchange
    //</summary>
	string LegendaExchanges(string id){
		if(id=="B2U")
			return "BitcoinToYou";
		if(id=="BAS")
			return "Basebit";
		if(id=="BIV")
			return "Bitinvest";
		if(id=="FLW")
			return "flowBTC";
		if(id=="FOX")
			return "Foxbit";
		if(id=="LOC")
			return "LocalBitcoins";
		if(id=="MBT")
			return "Mercado Bitcoin";
		if(id=="NEG")
			return "Negocie Coins";

		}   
	}
};

