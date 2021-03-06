/*
 * This file was auto-generated by the Axis C++ Web Service Generator (WSDL2Ws)
 * This file contains functions to manipulate complex type serverUpdateInfo
 */

#include "serverUpdateInfo.hpp"
#include <axis/AxisWrapperAPI.hpp>

extern int Axis_DeSerialize_playerShortInfo(playerShortInfo* param, IWrapperSoapDeSerializer* pDZ);
extern void* Axis_Create_playerShortInfo(playerShortInfo* pObj, bool bArray = false, int nSize=0);
extern void Axis_Delete_playerShortInfo(playerShortInfo* param, bool bArray = false, int nSize=0);
extern int Axis_Serialize_playerShortInfo(playerShortInfo* param, IWrapperSoapSerializer* pSZ, bool bArray = false);
extern int Axis_GetSize_playerShortInfo();

/*
 * This static method serialize a serverUpdateInfo type of object
 */
int Axis_Serialize_serverUpdateInfo(serverUpdateInfo* param, IWrapperSoapSerializer* pSZ, bool bArray = false)
{
	if (bArray)
	{
		pSZ->serialize("<", Axis_TypeName_serverUpdateInfo, ">", NULL);
	}
	else
	{
		const AxisChar* sPrefix = pSZ->getNamespacePrefix(Axis_URI_serverUpdateInfo);
		pSZ->serialize("<", Axis_TypeName_serverUpdateInfo, " xsi:type=\"", sPrefix, ":",
			Axis_TypeName_serverUpdateInfo, "\" xmlns:", sPrefix, "=\"",
			Axis_URI_serverUpdateInfo, "\">", NULL);
	}

	pSZ->serializeAsElement("active", (void*)&(param->active), XSD_BOOLEAN);
	pSZ->serializeAsElement("changeStatus", (void*)&(param->changeStatus), XSD_INT);
	pSZ->serializeAsElement("id", (void*)&(param->id), XSD_LONG);
	pSZ->serializeAsElement("map", (void*)&(param->map), XSD_STRING);
	pSZ->serializeAsElement("maxPlayer", (void*)&(param->maxPlayer), XSD_INT);
	pSZ->serializeCmplxArray((Axis_Array*)(&param->players),
		(void*) Axis_Serialize_playerShortInfo, (void*) Axis_Delete_playerShortInfo, (void*) Axis_GetSize_playerShortInfo,
		"players", Axis_URI_playerShortInfo);
	pSZ->serializeAsElement("sessionId", (void*)&(param->sessionId), XSD_INT);
	pSZ->serializeAsElement("sessionName", (void*)&(param->sessionName), XSD_STRING);

	pSZ->serialize("</", Axis_TypeName_serverUpdateInfo, ">", NULL);
	return AXIS_SUCCESS;
}

/*
 * This static method deserialize a serverUpdateInfo type of object
 */
int Axis_DeSerialize_serverUpdateInfo(serverUpdateInfo* param, IWrapperSoapDeSerializer* pIWSDZ)
{
	param->active = pIWSDZ->getElementAsBoolean("active",0);
	param->changeStatus = pIWSDZ->getElementAsInt("changeStatus",0);
	param->id = pIWSDZ->getElementAsLong("id",0);
	param->map = pIWSDZ->getElementAsString("map",0);
	param->maxPlayer = pIWSDZ->getElementAsInt("maxPlayer",0);
	param->players = (playerShortInfo_Array&)pIWSDZ->getCmplxArray((void*)Axis_DeSerialize_playerShortInfo
		, (void*)Axis_Create_playerShortInfo, (void*)Axis_Delete_playerShortInfo
		, (void*)Axis_GetSize_playerShortInfo, "players", Axis_URI_playerShortInfo);
	param->sessionId = pIWSDZ->getElementAsInt("sessionId",0);
	param->sessionName = pIWSDZ->getElementAsString("sessionName",0);
	return pIWSDZ->getStatus();
}
void* Axis_Create_serverUpdateInfo(serverUpdateInfo* pObj, bool bArray = false, int nSize=0)
{
	if (bArray && (nSize > 0))
	{
		if (pObj)
		{
			serverUpdateInfo* pNew = new serverUpdateInfo[nSize];
			memcpy(pNew, pObj, sizeof(serverUpdateInfo)*nSize/2);
			memset(pObj, 0, sizeof(serverUpdateInfo)*nSize/2);
			delete [] pObj;
			return pNew;
		}
		else
		{
			return new serverUpdateInfo[nSize];
		}
	}
	else
		return new serverUpdateInfo;
}

/*
 * This static method delete a serverUpdateInfo type of object
 */
void Axis_Delete_serverUpdateInfo(serverUpdateInfo* param, bool bArray = false, int nSize=0)
{
	if (bArray)
	{
		delete [] param;
	}
	else
	{
		delete param;
	}
}
/*
 * This static method gives the size of serverUpdateInfo type of object
 */
int Axis_GetSize_serverUpdateInfo()
{
	return sizeof(serverUpdateInfo);
}

serverUpdateInfo::serverUpdateInfo()
{
	/*do not allocate memory to any pointer members here
	 because deserializer will allocate memory anyway. */
	memset( &active, 0, sizeof( xsd__boolean));
	memset( &changeStatus, 0, sizeof( xsd__int));
	memset( &id, 0, sizeof( xsd__long));
	memset( &map, 0, sizeof( xsd__string));
	memset( &maxPlayer, 0, sizeof( xsd__int));
	players.m_Array = 0;
	players.m_Size = 0;
	memset( &sessionId, 0, sizeof( xsd__int));
	memset( &sessionName, 0, sizeof( xsd__string));
}

serverUpdateInfo::~serverUpdateInfo()
{
	/*delete any pointer and array members here*/
	delete [] ((playerShortInfo*)players.m_Array);
}
