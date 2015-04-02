#ifndef __OpcUaStackCore_ForwardInfo_h__
#define __OpcUaStackCore_ForwardInfo_h__

#include "OpcUaStackCore/Base/ObjectPool.h"
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Component/Component.h"

namespace OpcUaStackCore
{

	class DLLEXPORT ForwardInfo
	: public  ObjectPool<ForwardInfo>
	{
	  public:
		typedef boost::shared_ptr<ForwardInfo> SPtr;

		ForwardInfo(void);
		virtual ~ForwardInfo(void);

		void flag(uint32_t flag);
		uint32_t flag(void);
		bool isFlag(uint32_t flag);
		void component(Component* component);
		Component* component(void);

		static uint32_t read(void);
		static uint32_t write(void);
		static uint32_t all(void);

	  private:
		static const uint32_t read_;
		static const uint32_t write_;
		static const uint32_t all_;

		uint32_t flag_;
		Component* component_;
	};

}

#endif
