/*
 * This file was auto-generated by the Axis C++ Web Service Generator (WSDL2Ws)
 * This file contains functions to manipulate complex type game
 */

#include "game.hpp"
#include <axis/AxisWrapperAPI.hpp>

extern int Axis_DeSerialize_protocol(protocol* param, IWrapperSoapDeSerializer* pDZ);
extern void* Axis_Create_protocol(protocol* pObj, bool bArray = false, int nSize=0);
extern void Axis_Delete_protocol(protocol* param, bool bArray = false, int nSize=0);
extern int Axis_Serialize_protocol(protocol* param, IWrapperSoapSerializer* pSZ, bool bArray = false);
extern int Axis_GetSize_protocol();

/*
 * This static method serialize a game type of object
 */
int Axis_Serialize_game(game* param, IWrapperSoapSerializer* pSZ, bool bArray = false)
{
	if (bArray)
	{
		pSZ->serialize("<", Axis_TypeName_game, ">", NULL);
	}
	else
	{
		const AxisChar* sPrefix = pSZ->getNamespacePrefix(Axis_URI_game);
		pSZ->serialize("<", Axis_TypeName_game, " xsi:type=\"", sPrefix, ":",
			Axis_TypeName_game, "\" xmlns:", sPrefix, "=\"",
			Axis_URI_game, "\">", NULL);
	}

	pSZ->serializeAsElement("annotation", (void*)&(param->annotation), XSD_BASE64BINARY);
	pSZ->serializeAsElement("author", (void*)&(param->author), XSD_STRING);
	pSZ->serializeAsElement("commandLine", (void*)&(param->commandLine), XSD_BASE64BINARY);
	pSZ->serializeAsElement("direction", (void*)&(param->direction), XSD_BASE64BINARY);
	pSZ->serializeAsElement("files", (void*)&(param->files), XSD_STRING);
	pSZ->serializeAsElement("game_picture", (void*)&(param->game_picture), XSD_BASE64BINARY);
	pSZ->serializeAsElement("game_picture_name", (void*)&(param->game_picture_name), XSD_STRING);
	pSZ->serializeAsElement("game_url", (void*)&(param->game_url), XSD_STRING);
	pSZ->serializeAsElement("id", (void*)&(param->id), XSD_LONG);
	pSZ->serializeAsElement("name", (void*)&(param->name), XSD_STRING);
	pSZ->serializeAsElement("playerPingPresent", (void*)&(param->playerPingPresent), XSD_BOOLEAN);
	Axis_Serialize_protocol(param->protocol_Ref, pSZ);
	pSZ->serializeAsElement("publication_date", (void*)&(param->publication_date), XSD_INT);
	pSZ->serializeAsElement("publisher", (void*)&(param->publisher), XSD_STRING);

	pSZ->serialize("</", Axis_TypeName_game, ">", NULL);
	return AXIS_SUCCESS;
}

/*
 * This static method deserialize a game type of object
 */
int Axis_DeSerialize_game(game* param, IWrapperSoapDeSerializer* pIWSDZ)
{
	param->annotation = pIWSDZ->getElementAsBase64Binary("annotation",0);
	param->author = pIWSDZ->getElementAsString("author",0);
	param->commandLine = pIWSDZ->getElementAsBase64Binary("commandLine",0);
	param->direction = pIWSDZ->getElementAsBase64Binary("direction",0);
	param->files = pIWSDZ->getElementAsString("files",0);
	param->game_picture = pIWSDZ->getElementAsBase64Binary("game_picture",0);
	param->game_picture_name = pIWSDZ->getElementAsString("game_picture_name",0);
	param->game_url = pIWSDZ->getElementAsString("game_url",0);
	param->id = pIWSDZ->getElementAsLong("id",0);
	param->name = pIWSDZ->getElementAsString("name",0);
	param->playerPingPresent = pIWSDZ->getElementAsBoolean("playerPingPresent",0);
	param->protocol_Ref = (protocol*)pIWSDZ->getCmplxObject((void*)Axis_DeSerialize_protocol
		, (void*)Axis_Create_protocol, (void*)Axis_Delete_protocol
		, "protocol", Axis_URI_protocol);
	param->publication_date = pIWSDZ->getElementAsInt("publication_date",0);
	param->publisher = pIWSDZ->getElementAsString("publisher",0);
	return pIWSDZ->getStatus();
}
void* Axis_Create_game(game* pObj, bool bArray = false, int nSize=0)
{
	if (bArray && (nSize > 0))
	{
		if (pObj)
		{
			game* pNew = new game[nSize];
			memcpy(pNew, pObj, sizeof(game)*nSize/2);
			memset(pObj, 0, sizeof(game)*nSize/2);
			delete [] pObj;
			return pNew;
		}
		else
		{
			return new game[nSize];
		}
	}
	else
		return new game;
}

/*
 * This static method delete a game type of object
 */
void Axis_Delete_game(game* param, bool bArray = false, int nSize=0)
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
 * This static method gives the size of game type of object
 */
int Axis_GetSize_game()
{
	return sizeof(game);
}

game::game()
{
	/*do not allocate memory to any pointer members here
	 because deserializer will allocate memory anyway. */
	memset( &annotation, 0, sizeof( xsd__base64Binary));
	memset( &author, 0, sizeof( xsd__string));
	memset( &commandLine, 0, sizeof( xsd__base64Binary));
	memset( &direction, 0, sizeof( xsd__base64Binary));
	memset( &files, 0, sizeof( xsd__string));
	memset( &game_picture, 0, sizeof( xsd__base64Binary));
	memset( &game_picture_name, 0, sizeof( xsd__string));
	memset( &game_url, 0, sizeof( xsd__string));
	memset( &id, 0, sizeof( xsd__long));
	memset( &name, 0, sizeof( xsd__string));
	memset( &playerPingPresent, 0, sizeof( xsd__boolean));
	protocol_Ref=0;
	memset( &publication_date, 0, sizeof( xsd__int));
	memset( &publisher, 0, sizeof( xsd__string));
}

game::~game()
{
	/*delete any pointer and array members here*/
	delete protocol_Ref;
}