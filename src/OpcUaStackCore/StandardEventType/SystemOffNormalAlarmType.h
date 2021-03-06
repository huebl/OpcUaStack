/*
    EventTypeClass: SystemOffNormalAlarmType

    Generated Source Code - please do not change this source code

    EventTypeCodeGenerator Version:
        OpcUaStackCore - 3.0.1

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_SystemOffNormalAlarmType_h__
#define __OpcUaStackCore_SystemOffNormalAlarmType_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/StandardEventType/OffNormalAlarmType.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT SystemOffNormalAlarmType
    : public OffNormalAlarmType
    {
      public:
        typedef boost::shared_ptr<SystemOffNormalAlarmType> SPtr;
    
        SystemOffNormalAlarmType(void);
        virtual ~SystemOffNormalAlarmType(void);
        bool setSystemOffNormalAlarmType(OpcUaVariant::SPtr& variable);
        OpcUaVariant::SPtr getSystemOffNormalAlarmType(void);
        
        
        //- EventBase interface
        virtual void mapNamespaceUri(void);
        
        virtual OpcUaVariant::SPtr get(
            OpcUaNodeId& eventType,
            std::list<OpcUaQualifiedName::SPtr>& browseNameList,
            EventResult::Code& resultCode
        );
        //- EventBase interface
        
    
      private:
        EventVariables eventVariables_;
    
    };

}

#endif
