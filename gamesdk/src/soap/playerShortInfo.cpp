/*
 * This file was auto-generated by the Axis C++ Web Service Generator (WSDL2Ws)
 * This file contains functions to manipulate complex type playerShortInfo
 */

#include "playerShortInfo.hpp"
#include <axis/AxisWrapperAPI.hpp>

/*
 * This static method serialize a playerShortInfo type of object
 */
int Axis_Serialize_playerShortInfo(playerShortInfo* param, IWrapperSoapSerializer* pSZ, bool bArray = false)
{
	if (bArray)
	{
		pSZ->serialize("<", Axis_TypeName_playerShortInfo, ">", NULL);
	}
	else
	{
		const AxisChar* sPrefix = pSZ->getNamespacePrefix(Axis_URI_playerShortInfo);
		pSZ->serialize("<", Axis_TypeName_playerShortInfo, " xsi:type=\"", sPrefix, ":",
			Axis_TypeName_playerShortInfo, "\" xmlns:", sPrefix, "=\"",
			Axis_URI_playerShortInfo, "\">", NULL);
	}

	pSZ->serializeAsElement("fullName", (void*)&(param->fullName), XSD_BASE64BINARY);
	pSZ->serializeAsElement("ping", (void*)&(param->ping), XSD_INT);
	pSZ->serializeAsElement("score", (void*)&(param->score), XSD_INT);

	pSZ->serialize("</", Axis_TypeName_playerShortInfo, ">", NULL);
	return AXIS_SUCCESS;
}

/*
 * This static method deserialize a playerShortInfo type of object
 */
int Axis_DeSerialize_playerShortInfo(playerShortInfo* param, IWrapperSoapDeSerializer* pIWSDZ)
{
	param->fullName = pIWSDZ->getElementAsBase64Binary("fullName",0);
	param->ping = pIWSDZ->getElementAsInt("ping",0);
	param->score = pIWSDZ->getElementAsInt("score",0);
	return pIWSDZ->getStatus();
}
void* Axis_Create_playerShortInfo(playerShortInfo* pObj, bool bArray = false, int nSize=0)
{
	if (bArray && (nSize > 0))
	{
		if (pObj)
		{
			playerShortInfo* pNew = new playerShortInfo[nSize];
			memcpy(pNew, pObj, sizeof(playerShortInfo)*nSize/2);
			memset(pObj, 0, sizeof(playerShortInfo)*nSize/2);
			delete [] pObj;
			return pNew;
		}
		else
		{
			return new playerShortInfo[nSize];
		}
	}
	else
		return new playerShortInfo;
}

/*
 * This static method delete a playerShortInfo type of object
 */
void Axis_Delete_playerShortInfo(playerShortInfo* param, bool bArray = false, int nSize=0)
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
 * This static method gives the size of playerShortInfo type of object
 */
int Axis_GetSize_playerShortInfo()
{
	return sizeof(playerShortInfo);
}

playerShortInfo::playerShortInfo()
{
	/*do not allocate memory to any pointer members here
	 because deserializer will allocate memory anyway. */
	memset( &fullName, 0, sizeof( xsd__base64Binary));
	memset( &ping, 0, sizeof( xsd__int));
	memset( &score, 0, sizeof( xsd__int));
}

playerShortInfo::~playerShortInfo()
{
	/*delete any pointer and array members here*/
}
