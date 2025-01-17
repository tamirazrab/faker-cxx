#include "AirlineData.h"

namespace faker
{
const std::array<std::string_view, 3> aircraftTypes = {"regional", "narrowbody", "widebody"};

const std::array<Airline::AirlineInfo, 125> airlines = {{
    {"Aegean Airlines", "A3"},
    {"Aeroflot", "SU"},
    {"Aerolineas Argentinas", "AR"},
    {"Aeromexico", "AM"},
    {"Air Algerie", "AH"},
    {"Air Arabia", "G9"},
    {"Air Canada", "AC"},
    {"Air China", "CA"},
    {"Air Europa", "UX"},
    {"Air France-KLM", "AF"},
    {"Air India", "AI"},
    {"Air Mauritius", "MK"},
    {"Air New Zealand", "NZ"},
    {"Air Niugini", "PX"},
    {"Air Tahiti", "VT"},
    {"Air Tahiti Nui", "TN"},
    {"Air Transat", "TS"},
    {"AirAsia X", "D7"},
    {"AirAsia", "AK"},
    {"Aircalin", "SB"},
    {"Alaska Airlines", "AS"},
    {"Alitalia", "AZ"},
    {"All Nippon Airways", "NH"},
    {"Allegiant Air", "G4"},
    {"American Airlines", "AA"},
    {"Asiana Airlines", "OZ"},
    {"Avianca", "AV"},
    {"Azul Linhas Aereas Brasileiras", "AD"},
    {"Azur Air", "ZF"},
    {"Beijing Capital Airlines", "JD"},
    {"Boliviana de Aviacion", "OB"},
    {"British Airways", "BA"},
    {"Cathay Pacific", "CX"},
    {"Cebu Pacific Air", "5J"},
    {"China Airlines", "CI"},
    {"China Eastern Airlines", "MU"},
    {"China Southern Airlines", "CZ"},
    {"Condor", "DE"},
    {"Copa Airlines", "CM"},
    {"Delta Air Lines", "DL"},
    {"Easyfly", "VE"},
    {"EasyJet", "U2"},
    {"EcoJet", "8J"},
    {"Egyptair", "MS"},
    {"El Al", "LY"},
    {"Emirates Airlines", "EK"},
    {"Ethiopian Airlines", "ET"},
    {"Etihad Airways", "EY"},
    {"EVA Air", "BR"},
    {"Fiji Airways", "FJ"},
    {"Finnair", "AY"},
    {"Flybondi", "FO"},
    {"Flydubai", "FZ"},
    {"FlySafair", "FA"},
    {"Frontier Airlines", "F9"},
    {"Garuda Indonesia", "GA"},
    {"Go First", "G8"},
    {"Gol Linhas Aereas Inteligentes", "G3"},
    {"Hainan Airlines", "HU"},
    {"Hawaiian Airlines", "HA"},
    {"IndiGo Airlines", "6E"},
    {"Japan Airlines", "JL"},
    {"Jeju Air", "7C"},
    {"Jet2", "LS"},
    {"JetBlue Airways", "B6"},
    {"JetSMART", "JA"},
    {"Juneyao Airlines", "HO"},
    {"Kenya Airways", "KQ"},
    {"Korean Air", "KE"},
    {"Kulula.com", "MN"},
    {"LATAM Airlines", "LA"},
    {"Lion Air", "JT"},
    {"LOT Polish Airlines", "LO"},
    {"Lufthansa", "LH"},
    {"Libyan Airlines", "LN"},
    {"Linea Aerea Amaszonas", "Z8"},
    {"Malaysia Airlines", "MH"},
    {"Nordwind Airlines", "N4"},
    {"Norwegian Air Shuttle", "DY"},
    {"Oman Air", "WY"},
    {"Pakistan International Airlines", "PK"},
    {"Pegasus Airlines", "PC"},
    {"Philippine Airlines", "PR"},
    {"Qantas Group", "QF"},
    {"Qatar Airways", "QR"},
    {"Republic Airways", "YX"},
    {"Royal Air Maroc", "AT"},
    {"Ryanair", "FR"},
    {"S7 Airlines", "S7"},
    {"SAS", "SK"},
    {"Satena", "9R"},
    {"Saudia", "SV"},
    {"Shandong Airlines", "SC"},
    {"Sichuan Airlines", "3U"},
    {"Singapore Airlines", "SQ"},
    {"Sky Airline", "H2"},
    {"SkyWest Airlines", "OO"},
    {"South African Airways", "SA"},
    {"Southwest Airlines", "WN"},
    {"SpiceJet", "SG"},
    {"Spirit Airlines", "NK"},
    {"Spring Airlines", "9S"},
    {"SriLankan Airlines", "UL"},
    {"Star Peru", "2I"},
    {"Sun Country Airlines", "SY"},
    {"SunExpress", "XQ"},
    {"TAP Air Portugal", "TP"},
    {"Thai AirAsia", "FD"},
    {"Thai Airways", "TG"},
    {"TUI Airways", "BY"},
    {"Tunisair", "TU"},
    {"Turkish Airlines", "TK"},
    {"Ukraine International", "PS"},
    {"United Airlines", "UA"},
    {"Ural Airlines", "U6"},
    {"VietJet Air", "VJ"},
    {"Vietnam Airlines", "VN"},
    {"Virgin Atlantic Airways", "VS"},
    {"Virgin Australia", "VA"},
    {"VivaAerobus", "VB"},
    {"VOEPASS Linhas Aereas", "2Z"},
    {"Volaris", "Y4"},
    {"WestJet", "WS"},
    {"Wingo", "P5"},
    {"Wizz Air", "W6"},
}};

const std::array<Airline::Airplane, 155> airplanes{{
    {"Aerospatiale/BAC Concorde", "SSC"},
    {"Airbus A300", "AB3"},
    {"Airbus A310", "310"},
    {"Airbus A310-200", "312"},
    {"Airbus A310-300", "313"},
    {"Airbus A318", "318"},
    {"Airbus A319", "319"},
    {"Airbus A319neo", "31N"},
    {"Airbus A320", "320"},
    {"Airbus A320neo", "32N"},
    {"Airbus A321", "321"},
    {"Airbus A321neo", "32Q"},
    {"Airbus A330", "330"},
    {"Airbus A330-200", "332"},
    {"Airbus A330-300", "333"},
    {"Airbus A330-800neo", "338"},
    {"Airbus A330-900neo", "339"},
    {"Airbus A340", "340"},
    {"Airbus A340-200", "342"},
    {"Airbus A340-300", "343"},
    {"Airbus A340-500", "345"},
    {"Airbus A340-600", "346"},
    {"Airbus A350", "350"},
    {"Airbus A350-900", "359"},
    {"Airbus A350-1000", "351"},
    {"Airbus A380", "380"},
    {"Airbus A380-800", "388"},
    {"Antonov An-12", "ANF"},
    {"Antonov An-24", "AN4"},
    {"Antonov An-26", "A26"},
    {"Antonov An-28", "A28"},
    {"Antonov An-30", "A30"},
    {"Antonov An-32", "A32"},
    {"Antonov An-72", "AN7"},
    {"Antonov An-124 Ruslan", "A4F"},
    {"Antonov An-140", "A40"},
    {"Antonov An-148", "A81"},
    {"Antonov An-158", "A58"},
    {"Antonov An-225 Mriya", "A5F"},
    {"Boeing 707", "703"},
    {"Boeing 717", "717"},
    {"Boeing 720B", "B72"},
    {"Boeing 727", "727"},
    {"Boeing 727-100", "721"},
    {"Boeing 727-200", "722"},
    {"Boeing 737 MAX 7", "7M7"},
    {"Boeing 737 MAX 8", "7M8"},
    {"Boeing 737 MAX 9", "7M9"},
    {"Boeing 737 MAX 10", "7MJ"},
    {"Boeing 737", "737"},
    {"Boeing 737-100", "731"},
    {"Boeing 737-200", "732"},
    {"Boeing 737-300", "733"},
    {"Boeing 737-400", "734"},
    {"Boeing 737-500", "735"},
    {"Boeing 737-600", "736"},
    {"Boeing 737-700", "73G"},
    {"Boeing 737-800", "738"},
    {"Boeing 737-900", "739"},
    {"Boeing 747", "747"},
    {"Boeing 747-100", "741"},
    {"Boeing 747-200", "742"},
    {"Boeing 747-300", "743"},
    {"Boeing 747-400", "744"},
    {"Boeing 747-400D", "74J"},
    {"Boeing 747-8", "748"},
    {"Boeing 747SP", "74L"},
    {"Boeing 747SR", "74R"},
    {"Boeing 757", "757"},
    {"Boeing 757-200", "752"},
    {"Boeing 757-300", "753"},
    {"Boeing 767", "767"},
    {"Boeing 767-200", "762"},
    {"Boeing 767-300", "763"},
    {"Boeing 767-400", "764"},
    {"Boeing 777", "777"},
    {"Boeing 777-200", "772"},
    {"Boeing 777-200LR", "77L"},
    {"Boeing 777-300", "773"},
    {"Boeing 777-300ER", "77W"},
    {"Boeing 787", "787"},
    {"Boeing 787-8", "788"},
    {"Boeing 787-9", "789"},
    {"Boeing 787-10", "781"},
    {"Canadair Challenger", "CCJ"},
    {"Canadair CL-44", "CL4"},
    {"Canadair Regional Jet 100", "CR1"},
    {"Canadair Regional Jet 200", "CR2"},
    {"Canadair Regional Jet 700", "CR7"},
    {"Canadair Regional Jet 705", "CRA"},
    {"Canadair Regional Jet 900", "CR9"},
    {"Canadair Regional Jet 1000", "CRK"},
    {"De Havilland Canada DHC-2 Beaver", "DHP"},
    {"De Havilland Canada DHC-2 Turbo-Beaver", "DHR"},
    {"De Havilland Canada DHC-3 Otter", "DHL"},
    {"De Havilland Canada DHC-4 Caribou", "DHC"},
    {"De Havilland Canada DHC-6 Twin Otter", "DHT"},
    {"De Havilland Canada DHC-7 Dash 7", "DH7"},
    {"De Havilland Canada DHC-8-100 Dash 8 / 8Q", "DH1"},
    {"De Havilland Canada DHC-8-200 Dash 8 / 8Q", "DH2"},
    {"De Havilland Canada DHC-8-300 Dash 8 / 8Q", "DH3"},
    {"De Havilland Canada DHC-8-400 Dash 8Q", "DH4"},
    {"De Havilland DH.104 Dove", "DHD"},
    {"De Havilland DH.114 Heron", "DHH"},
    {"Douglas DC-3", "D3F"},
    {"Douglas DC-6", "D6F"},
    {"Douglas DC-8-50", "D8T"},
    {"Douglas DC-8-62", "D8L"},
    {"Douglas DC-8-72", "D8Q"},
    {"Douglas DC-9-10", "D91"},
    {"Douglas DC-9-20", "D92"},
    {"Douglas DC-9-30", "D93"},
    {"Douglas DC-9-40", "D94"},
    {"Douglas DC-9-50", "D95"},
    {"Douglas DC-10", "D10"},
    {"Douglas DC-10-10", "D1X"},
    {"Douglas DC-10-30", "D1Y"},
    {"Embraer 170", "E70"},
    {"Embraer 175", "E75"},
    {"Embraer 190", "E90"},
    {"Embraer 195", "E95"},
    {"Embraer E190-E2", "290"},
    {"Embraer E195-E2", "295"},
    {"Embraer EMB.110 Bandeirante", "EMB"},
    {"Embraer EMB.120 Brasilia", "EM2"},
    {"Embraer Legacy 600", "ER3"},
    {"Embraer Phenom 100", "EP1"},
    {"Embraer Phenom 300", "EP3"},
    {"Embraer RJ135", "ER3"},
    {"Embraer RJ140", "ERD"},
    {"Embraer RJ145 Amazon", "ER4"},
    {"Ilyushin IL18", "IL8"},
    {"Ilyushin IL62", "IL6"},
    {"Ilyushin IL76", "IL7"},
    {"Ilyushin IL86", "ILW"},
    {"Ilyushin IL96-300", "I93"},
    {"Ilyushin IL114", "I14"},
    {"Lockheed L-182 / 282 / 382 (L-100) Hercules", "LOH"},
    {"Lockheed L-188 Electra", "LOE"},
    {"Lockheed L-1011 Tristar", "L10"},
    {"Lockheed L-1049 Super Constellation", "L49"},
    {"McDonnell Douglas MD11", "M11"},
    {"McDonnell Douglas MD80", "M80"},
    {"McDonnell Douglas MD81", "M81"},
    {"McDonnell Douglas MD82", "M82"},
    {"McDonnell Douglas MD83", "M83"},
    {"McDonnell Douglas MD87", "M87"},
    {"McDonnell Douglas MD88", "M88"},
    {"McDonnell Douglas MD90", "M90"},
    {"Sukhoi Superjet 100-95", "SU9"},
    {"Tupolev Tu-134", "TU3"},
    {"Tupolev Tu-154", "TU5"},
    {"Tupolev Tu-204", "T20"},
    {"Yakovlev Yak-40", "YK4"},
    {"Yakovlev Yak-42", "YK2"},
}};

const std::array<Airline::Airport, 119> airports = {{
    {"Adelaide International Airport", "ADL"},
    {"Adolfo Suarez Madrid-Barajas Airport", "MAD"},
    {"Aeroparque Jorge Newbery Airport", "AEP"},
    {"Afonso Pena International Airport", "CWB"},
    {"Alfonso Bonilla Aragon International Airport", "CLO"},
    {"Amsterdam Airport Schiphol", "AMS"},
    {"Arturo Merino Benitez International Airport", "SCL"},
    {"Auckland International Airport", "AKL"},
    {"Beijing Capital International Airport", "PEK"},
    {"Belem Val de Cans International Airport", "BEL"},
    {
        "Belo Horizonte Tancredo Neves International Airport",
        "CNF",
    },
    {"Berlin-Tegel Airport", "TXL"},
    {"Bole International Airport", "ADD"},
    {
        "Brasilia-Presidente Juscelino Kubitschek International Airport",
        "BSB",
    },
    {"Brisbane International Airport", "BNE"},
    {"Brussels Airport", "BRU"},
    {"Cairns Airport", "CNS"},
    {"Cairo International Airport", "CAI"},
    {"Canberra Airport", "CBR"},
    {"Capetown International Airport", "CPT"},
    {"Charles de Gaulle International Airport", "CDG"},
    {"Charlotte Douglas International Airport", "CLT"},
    {"Chengdu Shuangliu International Airport", "CTU"},
    {"Chhatrapati Shivaji International Airport", "BOM"},
    {"Chicago O'Hare International Airport", "ORD"},
    {"Chongqing Jiangbei International Airport", "CKG"},
    {"Christchurch International Airport", "CHC"},
    {"Copenhagen Kastrup Airport", "CPH"},
    {"Dallas Fort Worth International Airport", "DFW"},
    {"Daniel K. Inouye International Airport", "HNL"},
    {"Denver International Airport", "DEN"},
    {"Don Mueang International Airport", "DMK"},
    {"Dubai International Airport", "DXB"},
    {"Dublin Airport", "DUB"},
    {"Dusseldorf Airport", "DUS"},
    {"El Dorado International Airport", "BOG"},
    {"Eleftherios Venizelos International Airport", "ATH"},
    {"Faa'a International Airport", "PPT"},
    {"Fort Lauderdale Hollywood International Airport", "FLL"},
    {"Fortaleza Pinto Martins International Airport", "FOR"},
    {"Frankfurt am Main Airport", "FRA"},
    {"George Bush Intercontinental Houston Airport", "IAH"},
    {"Gold Coast Airport", "OOL"},
    {
        "Guarulhos - Governador Andre Franco Montoro International Airport",
        "GRU",
    },
    {"Hartsfield-Jackson Atlanta International Airport", "ATL"},
    {"Helsinki Vantaa Airport", "HEL"},
    {"Hobart International Airport", "HBA"},
    {"Hong Kong International Airport", "HKG"},
    {"Houari Boumediene Airport", "ALG"},
    {"Hurgada International Airport", "HRG"},
    {"Incheon International Airport", "ICN"},
    {"Indira Gandhi International Airport", "DEL"},
    {"Istanbul Airport", "IST"},
    {"Jacksons International Airport", "POM"},
    {"Jeju International Airport", "CJU"},
    {"John F Kennedy International Airport", "JFK"},
    {"Jorge Chavez International Airport", "LIM"},
    {"Jose Maria Cordova International Airport", "MDE"},
    {"Josep Tarradellas Barcelona-El Prat Airport", "BCN"},
    {"Kahului Airport", "OGG"},
    {"King Abdulaziz International Airport", "JED"},
    {"Kuala Lumpur International Airport", "KUL"},
    {"Kunming Changshui International Airport", "KMG"},
    {"La Tontouta International Airport", "NOU"},
    {"Leonardo da Vinci-Fiumicino Airport", "FCO"},
    {"London Heathrow Airport", "LHR"},
    {"Los Angeles International Airport", "LAX"},
    {"McCarran International Airport", "LAS"},
    {"Melbourne International Airport", "MEL"},
    {"Mexico City International Airport", "MEX"},
    {"Miami International Airport", "MIA"},
    {"Ministro Pistarini International Airport", "EZE"},
    {
        "Minneapolis-St Paul International/Wold-Chamberlain Airport",
        "MSP",
    },
    {"Mohammed V International Airport", "CMN"},
    {"Moscow Domodedovo Airport", "DME"},
    {"Munich Airport", "MUC"},
    {"Murtala Muhammed International Airport", "LOS"},
    {"Nadi International Airport", "NAN"},
    {"Nairobi Jomo Kenyatta International Airport", "NBO"},
    {"Narita International Airport", "NRT"},
    {"Newark Liberty International Airport", "EWR"},
    {"Ninoy Aquino International Airport", "MNL"},
    {"Noumea Magenta Airport", "GEA"},
    {"O. R. Tambo International Airport", "JNB"},
    {"Orlando International Airport", "MCO"},
    {"Oslo Lufthavn", "OSL"},
    {"Perth Airport", "PER"},
    {"Phoenix Sky Harbor International Airport", "PHX"},
    {
        "Recife Guararapes-Gilberto Freyre International Airport",
        "REC",
    },
    {"Rio de Janeiro Galeao International Airport", "GIG"},
    {"Salgado Filho International Airport", "POA"},
    {
        "Salvador Deputado Luis Eduardo Magalhaes International Airport",
        "SSA",
    },
    {"San Francisco International Airport", "SFO"},
    {"Santos Dumont Airport", "SDU"},
    {"Sao Paulo-Congonhas Airport", "CGH"},
    {"Seattle Tacoma International Airport", "SEA"},
    {"Shanghai Hongqiao International Airport", "SHA"},
    {"Shanghai Pudong International Airport", "PVG"},
    {"Shenzhen Bao'an International Airport", "SZX"},
    {"Sheremetyevo International Airport", "SVO"},
    {"Singapore Changi Airport", "SIN"},
    {"Soekarno-Hatta International Airport", "CGK"},
    {"Stockholm-Arlanda Airport", "ARN"},
    {"Suvarnabhumi Airport", "BKK"},
    {"Sydney Kingsford Smith International Airport", "SYD"},
    {"Taiwan Taoyuan International Airport", "TPE"},
    {"Tan Son Nhat International Airport", "SGN"},
    {"Tokyo Haneda International Airport", "HND"},
    {"Toronto Pearson International Airport", "YYZ"},
    {"Tunis Carthage International Airport", "TUN"},
    {"Vancouver International Airport", "YVR"},
    {"Vienna International Airport", "VIE"},
    {"Viracopos International Airport", "VCP"},
    {"Vnukovo International Airport", "VKO"},
    {"Wellington International Airport", "WLG"},
    {"Xi'an Xianyang International Airport", "XIY"},
    {"Zhukovsky International Airport", "ZIA"},
    {"Zurich Airport", "ZRH"},
}};

const std::unordered_map<Airline::AircraftType, int> aircraftTypeMaxRows = {
    {Airline::AircraftType::Regional, 20},
    {Airline::AircraftType::Narrowbody, 40},
    {Airline::AircraftType::Widebody, 60},
};

const std::unordered_map<Airline::AircraftType, std::string_view> aircraftTypeSeatLetters = {
    {Airline::AircraftType::Regional, "ABCD"},
    {Airline::AircraftType::Narrowbody, "ABCDEF"},
    {Airline::AircraftType::Widebody, "ABCDEFGHJK"},
};

}
