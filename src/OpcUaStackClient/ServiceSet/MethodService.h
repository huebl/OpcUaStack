/*
   Copyright 2015 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   Informationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Kai Huebl (kai@huebl-sgh.de)
 */

#ifndef __OpcUaStackClient_MethodService_h__
#define __OpcUaStackClient_MethodService_h__

#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Component/Component.h"
#include "OpcUaStackCore/ServiceSet/MethodServiceTransaction.h"
#include "OpcUaStackClient/ServiceSet/SessionOld.h"

using namespace OpcUaStackCore;

namespace OpcUaStackClient 
{

	class DLLEXPORT MethodServiceIf
	{
	  public:
		virtual ~MethodServiceIf(void) {}

        virtual void methodServiceCallResponse(ServiceTransactionCall::SPtr serviceTransactionCall) {};
	};

	class DLLEXPORT MethodService
	: public Component
	{
	  public:
		boost::shared_ptr<MethodService> SPtr;

		MethodService(void);
		~MethodService(void);

		void componentSession(Component* componentSession);
		void methodServiceIf(MethodServiceIf* methodServiceIf);

		void sendSync(ServiceTransactionCall::SPtr serviceTransactionRead);
		void send(ServiceTransactionCall::SPtr serviceTransactionRead);

		//- Component -----------------------------------------------------------------
		void receive(OpcUaNodeId& typeId, Message::SPtr message);
		//- Component -----------------------------------------------------------------

	  private:
		Component* componentSession_;

		MethodServiceIf* methodServiceIf_;
	};

}

#endif
