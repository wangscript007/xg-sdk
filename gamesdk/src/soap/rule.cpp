/*
 * This file was auto-generated by the Axis C++ Web Service Generator (WSDL2Ws)
 * This file contains functions to manipulate complex type rule
 */

#include "rule.hpp"
#include <axis/AxisWrapperAPI.hpp>

/*
 * This static method serialize a rule type of object
 */
int Axis_Serialize_rule(rule* param, IWrapperSoapSerializer* pSZ, bool bArray = false)
{
	if (bArray)
	{
		pSZ->serialize("<", Axis_TypeName_rule, ">", NULL);
	}
	else
	{
		const AxisChar* sPrefix = pSZ->getNamespacePrefix(Axis_URI_rule);
		pSZ->serialize("<", Axis_TypeName_rule, " xsi:type=\"", sPrefix, ":",
			Axis_TypeName_rule, "\" xmlns:", sPrefix, "=\"",
			Axis_URI_rule, "\">", NULL);
	}

	pSZ->serializeAsElement("key", (void*)&(param->key), XSD_BASE64BINARY);
	pSZ->serializeAsElement("value", (void*)&(param->value), XSD_BASE64BINARY);

	pSZ->serialize("</", Axis_TypeName_rule, ">", NULL);
	return AXIS_SUCCESS;
}

/*
 * This static method deserialize a rule type of object
 */
int Axis_DeSerialize_rule(rule* param, IWrapperSoapDeSerializer* pIWSDZ)
{
	param->key = pIWSDZ->getElementAsBase64Binary("key",0);
	param->value = pIWSDZ->getElementAsBase64Binary("value",0);
	return pIWSDZ->getStatus();
}
void* Axis_Create_rule(rule* pObj, bool bArray = false, int nSize=0)
{
	if (bArray && (nSize > 0))
	{
		if (pObj)
		{
			rule* pNew = new rule[nSize];
			memcpy(pNew, pObj, sizeof(rule)*nSize/2);
			memset(pObj, 0, sizeof(rule)*nSize/2);
			delete [] pObj;
			return pNew;
		}
		else
		{
			return new rule[nSize];
		}
	}
	else
		return new rule;
}

/*
 * This static method delete a rule type of object
 */
void Axis_Delete_rule(rule* param, bool bArray = false, int nSize=0)
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
 * This static method gives the size of rule type of object
 */
int Axis_GetSize_rule()
{
	return sizeof(rule);
}

rule::rule()
{
	/*do not allocate memory to any pointer members here
	 because deserializer will allocate memory anyway. */
	memset( &key, 0, sizeof( xsd__base64Binary));
	memset( &value, 0, sizeof( xsd__base64Binary));
}

rule::~rule()
{
	/*delete any pointer and array members here*/
}
