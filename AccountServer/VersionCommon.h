#ifndef __VERSION_COMMON_H__
#define __VERSION_COMMON_H__
#define __MAINSERVER
#define		__VER 17	// 15��

#if !defined( __TESTSERVER ) && !defined( __MAINSERVER )
	#define __INTERNALSERVER
#endif

//#define __DEBUG_SALT

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

#define		__SERVER				// Ŭ���̾�Ʈ �����ڵ带 �������� �ʱ� ���� define
//#define	__S0114_RELOADPRO		// ĳ���� DB���� �о���� : Neuz, Trans, login, World, Certifier, Account( ini : SKIP_TRACKING �߰� )
#define		__STL_0402		// stl

#if (_MSC_VER > 1200)
#define		__VS2003		// �����Ϸ�����.net
#endif

// 08-01-22
#define	__GPAUTH_01		// ����/������ ���� ����
#define	__GPAUTH_02		// ����/������ ���� ���� - ����
#define	__EUROPE_0514

// 11th
#define __LOG_PLAYERCOUNT_CHANNEL // ä�κ� ���� �α� 

#define	__REMOVE_PLAYER_0221		// ĳ���� ���� ��Ŷ ����

#define __RT_1025

// 14th
//	#define __PCBANG			// PC�� ����



#if	  defined(__INTERNALSERVER)	// ���� �繫�� �׽�Ʈ���� 
	#define	__SECURITY_0628	// ���ҽ� ���� ����

#elif defined(__TESTSERVER)		// �ܺ� ���� �׽�Ʈ���� 

#elif defined(__MAINSERVER)		// �ܺ� ����


#endif	// end - ���������� define 

#endif	// __VERSION_COMMON_H__