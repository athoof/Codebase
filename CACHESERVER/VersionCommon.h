#ifndef __VERSION_COMMON_H__
#define __VERSION_COMMON_H__
#define		__VER 17	// 15��
#define __MAINSERVER
#if !defined( __TESTSERVER ) && !defined( __MAINSERVER )
	#define __INTERNALSERVER
#endif

#if __VER >= 16
#define __NEW_PROP_PARAMETER 
#define __3RD_LEGEND16 
#define __IMPROVE_MAP_SYSTEM
#define __INSTANCE_AGGRO_SYSTEM
#define __ITEM_LINK
	
#endif // __VER >= 16

#if __VER >= 17
#define __NEW_WEAPON_GLOW
#define __COLOSSEUM
#define __BAHARA_AGGRO_SYSTEM
#endif // __VER >= 17

#define		__SERVER					// Ŭ���̾�Ʈ �����ڵ带 �������� �ʱ� ���� define
#define		__CRC
#define		__SO1014					// ���� ���� ó��( ĳ��, ����, �α��� )
#define		__PROTOCOL0910
#define		__PROTOCOL1021
#define		__VERIFYNETLIB
#define		__MAP_SIZE					// CServerdesc��� ������ 
#define		__S8_SERVER_PORT			// 2006�� 11�� 7�� ������Ʈ - World, Cache, CoreServer
#define		__STL_0402					// stl

// 11
#define		__MA_VER11_07				// cache �������� loginserver�� �������Ӳ����� �˷��ִ� �κ�
#define		__RT_1025					// �޽���	//

#if (_MSC_VER > 1200)
#define		__VS2003		// �����Ϸ�����.net
#endif

//#define		__US_LOGIN_0223


#if	  defined(__INTERNALSERVER)	// ���� �繫�� �׽�Ʈ���� 
	#define		__GUILDVOTE				// ��� ��ǥ 
	#define		__VERIFY_ARCHIVE1129
	#define		__CRASH_0404			// ĳ�� ���� ũ���� ���� ���
#elif defined(__TESTSERVER)		// �ܺ� ���� �׽�Ʈ���� 
	#define		__GUILDVOTE				// ��� ��ǥ 
#elif defined(__MAINSERVER)		// �ܺ� ����
 
#endif	// end - ���������� define 


#endif
