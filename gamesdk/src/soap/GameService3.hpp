/*
 * This file was auto-generated by the Axis C++ Web Service Generator (WSDL2Ws)
 * This file contains Client Stub Class for remote web service 
 */

#if !defined(__GAMESERVICE3_CLIENTSTUB_H__INCLUDED_)
#define __GAMESERVICE3_CLIENTSTUB_H__INCLUDED_

#include <axis/client/Stub.hpp>
#include "GameService3Service_AxisClientException.hpp"
#include <axis/ISoapFault.hpp>
#include "serverShortInfo.hpp"
#include "playerShortInfo_Array.hpp"
#include "serversRoutine_Array.hpp"
#include "game.hpp"
#include "rule_Array.hpp"
#include "serverAddress.hpp"
#include "rule.hpp"
#include "serverUpdateInfo.hpp"
#include "playerShortInfo.hpp"
#include "serverAddress_Array.hpp"
#include "protocol.hpp"
#include "serversRoutine.hpp"
#include "game_Array.hpp"
#include "serverShortInfo_Array.hpp"

class GameService3 :public Stub
{
public:
	STORAGE_CLASS_INFO GameService3(const char* pchEndpointUri, AXIS_PROTOCOL_TYPE eProtocol=APTHTTP1_1);
	STORAGE_CLASS_INFO GameService3();
public:
	STORAGE_CLASS_INFO virtual ~GameService3();
public: 
	STORAGE_CLASS_INFO game_Array getSupportedGames();
	STORAGE_CLASS_INFO rule_Array getServerRules(xsd__long Value0);
	STORAGE_CLASS_INFO rule_Array getSessionRules(xsd__long Value0,xsd__int Value1);
	STORAGE_CLASS_INFO serversRoutine_Array getServersRoutines();
	STORAGE_CLASS_INFO serverUpdateInfo* getServerUpdateInfo(xsd__long Value0,xsd__int Value1);
	STORAGE_CLASS_INFO serverShortInfo_Array getRegisteredServerShortInfos();
	STORAGE_CLASS_INFO serverAddress_Array getServerAddressesByGameName(xsd__string Value0);
	int getFaultDetail(char** ppcDetail);
};

#endif /* !defined(__GAMESERVICE3_CLIENTSTUB_H__INCLUDED_)*/
