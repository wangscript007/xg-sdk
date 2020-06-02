/*
 * This file was auto-generated by the Axis C++ Web Service Generator (WSDL2Ws)
 * This file contains functions to manipulate complex type serverShortInfo
 */

#if !defined(__SERVERSHORTINFO_PARAM_H__INCLUDED_)
#define __SERVERSHORTINFO_PARAM_H__INCLUDED_

#include <axis/AxisUserAPI.hpp>
AXIS_CPP_NAMESPACE_USE 

/*Local name and the URI for the type*/
static const char* Axis_URI_serverShortInfo = "urn:BeanService";
static const char* Axis_TypeName_serverShortInfo = "serverShortInfo";

class serverShortInfo
{
public:
	xsd__boolean active;
	xsd__int currentPlayer;
	xsd__long gameID;
	xsd__string host;
	xsd__long id;
	xsd__string map;
	xsd__int maxPlayer;
	xsd__string name;
	xsd__int port;
	xsd__string regime;
	xsd__int sessionId;
	xsd__string sessionName;
	xsd__long status;
	serverShortInfo();
	virtual ~serverShortInfo();
};

#endif /* !defined(__SERVERSHORTINFO_PARAM_H__INCLUDED_)*/
