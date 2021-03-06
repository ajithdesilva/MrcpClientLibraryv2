
///////////////////////////////////////////////////////////////////////////////
//	File Name:		CMrcpSendCommand.cpp
//
//	Description:	CMrcpSendCommand class implementation
//                object instantiated to process command results from task queue
//
//	Declared in this file:
//		none
//
//	Implemented in this file:
//		CMrcpProcessCommandResults::CMrcpProcessCommandResults(AMrcpSignaling* a_signaling)
//		CMrcpProcessCommandResults::~CMrcpProcessCommandResults()
//		void CMrcpProcessCommandResults::Execute()
///////////////////////////////////////////////////////////////////////////////
//	Revisions:
//	Date		Initial 	Description
//	----		------- 	-----------
//
///////////////////////////////////////////////////////////////////////////////


#include "MrcpTasks.h"
#include "AMrcpSignaling.h"


namespace MrcpV2RefLib
{
////////////////////////////////////////////////////////////////////////// 
//
// Description - Constructor
// Input - 
//         
// Output - 
//          
///////////////////////////////////////////////////////////////////////////

CMrcpProcessCommandResults::CMrcpProcessCommandResults(AMrcpSignaling* a_signaling)
	:  MrcpTasks( a_signaling)
{
	m_messageBuffer.erase();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor
// Input - None
//         
// Output - 
//          
///////////////////////////////////////////////////////////////////////////
CMrcpProcessCommandResults::~CMrcpProcessCommandResults()
{

}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Execute
// Input - None
//         
// Output - 
//          
///////////////////////////////////////////////////////////////////////////
void CMrcpProcessCommandResults::Execute()
{
	m_signalObj->PrimProcessResults( MessageBuffer());
}

} //end namespace

