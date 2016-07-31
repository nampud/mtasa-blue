/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*               (Shared logic for modifications)
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        mods/shared_logic/lua/CLuaFunctionDefs.h
*  PURPOSE:     Lua function definitions class header
*  DEVELOPERS:  Ed Lyons <eai@opencoding.net>
*               Jax <>
*               Cecill Etheredge <ijsf@gmx.net>
*               Kevin Whiteside <kevuwk@gmail.com>
*               Chris McArthur <>
*               Derek Abdine <>
*               Christian Myhre Lundheim <>
*               Stanislav Bobrov <lil_toady@hotmail.com>
*               Alberto Alonso <rydencillo@gmail.com>
*               Florian Busse <flobu@gmx.net>
*
*****************************************************************************/

class CLuaFunctionDefinitions;

#pragma once

#include "LuaCommon.h"
#include "CLuaMain.h"
#include "CLuaTimerManager.h"

class CRegisteredCommands;

#define LUA_DECLARE(x) static int x ( lua_State * luaVM );

class CLuaFunctionDefs
{
    friend class CScriptArgReader;

public:
    static void Initialize ( class CLuaManager* pLuaManager,
                              class CScriptDebugging* pScriptDebugging,
                              class CClientGame* pClientGame );

    // Reserved functions
    LUA_DECLARE ( DisabledFunction );

    // Event functions
    LUA_DECLARE ( AddEvent );
    LUA_DECLARE ( AddEventHandler );
    LUA_DECLARE ( RemoveEventHandler );
    LUA_DECLARE ( GetEventHandlers );
    LUA_DECLARE ( TriggerEvent );
    LUA_DECLARE ( TriggerServerEvent );
    LUA_DECLARE ( CancelEvent );
    LUA_DECLARE ( WasEventCancelled );
    LUA_DECLARE ( TriggerLatentServerEvent );
    LUA_DECLARE ( GetLatentEventHandles );
    LUA_DECLARE ( GetLatentEventStatus );
    LUA_DECLARE ( CancelLatentEvent );

    // Misc functions
    LUA_DECLARE ( DownloadFile );

    // Output functions
    LUA_DECLARE ( OutputConsole );
    LUA_DECLARE ( OutputChatBox );
    LUA_DECLARE ( ShowChat );
    LUA_DECLARE ( IsChatVisible );
    LUA_DECLARE ( OutputClientDebugString );
    LUA_DECLARE ( luaB_print );
    LUA_DECLARE ( SetClipboard );
    LUA_DECLARE ( GetClipboard );
    LUA_DECLARE ( SetWindowFlashing );

    // Clothes and body functions
    LUA_DECLARE ( GetBodyPartName );
    LUA_DECLARE ( GetClothesByTypeIndex );
    LUA_DECLARE ( GetTypeIndexFromClothes );
    LUA_DECLARE ( GetClothesTypeName );

    // Explosion functions
    LUA_DECLARE ( CreateExplosion );

    // Fire functions
    LUA_DECLARE ( CreateFire );

    // Cursor funcs
    LUA_DECLARE ( GetCursorPosition );
    LUA_DECLARE ( SetCursorPosition );
    LUA_DECLARE ( IsCursorShowing );
    LUA_DECLARE ( GetCursorAlpha );
    LUA_DECLARE ( SetCursorAlpha );
    
    LUA_DECLARE ( ShowCursor );

    // Util functions to make scripting easier for the end user
    // Some of these are based on standard mIRC script funcs as a lot of people will be used to them
    LUA_DECLARE ( GetTok );
    LUA_DECLARE ( Split );
    LUA_DECLARE ( SetTimer );
    LUA_DECLARE ( KillTimer );
    LUA_DECLARE ( ResetTimer );
    LUA_DECLARE ( GetTimers );
    LUA_DECLARE ( IsTimer );
    LUA_DECLARE ( GetTimerDetails );
    LUA_DECLARE ( GetTickCount_ );
    LUA_DECLARE ( GetCTime );
    LUA_DECLARE ( tocolor );
    LUA_DECLARE ( Reference );
    LUA_DECLARE ( Dereference );
    LUA_DECLARE ( GetColorFromString );
    LUA_DECLARE ( GetValidPedModels );
    LUA_DECLARE ( SetDevelopmentMode );
    LUA_DECLARE ( GetDevelopmentMode );

    // World functions
    LUA_DECLARE ( GetTime_ );
    LUA_DECLARE ( GetGroundPosition );
    LUA_DECLARE ( ProcessLineOfSight );
    LUA_DECLARE ( IsLineOfSightClear );
    LUA_DECLARE ( GetWorldFromScreenPosition );
    LUA_DECLARE ( GetScreenFromWorldPosition  );
    LUA_DECLARE ( GetWeather );
    LUA_DECLARE ( GetZoneName );
    LUA_DECLARE ( GetGravity );
    LUA_DECLARE ( GetGameSpeed );
    LUA_DECLARE ( GetMinuteDuration );
    LUA_DECLARE ( GetWaveHeight );
    LUA_DECLARE ( IsGarageOpen );
    LUA_DECLARE ( GetGaragePosition );
    LUA_DECLARE ( GetGarageSize );
    LUA_DECLARE ( GetGarageBoundingBox );
    LUA_DECLARE ( IsWorldSpecialPropertyEnabled );
    LUA_DECLARE ( GetBlurLevel );
    LUA_DECLARE ( GetTrafficLightState );
    LUA_DECLARE ( AreTrafficLightsLocked );
    LUA_DECLARE ( GetJetpackMaxHeight );
    LUA_DECLARE ( GetAircraftMaxHeight );
    LUA_DECLARE ( GetAircraftMaxVelocity );
    LUA_DECLARE ( GetOcclusionsEnabled );

    LUA_DECLARE ( SetTime );
    LUA_DECLARE ( GetSkyGradient );
    LUA_DECLARE ( SetSkyGradient );
    LUA_DECLARE ( ResetSkyGradient );
    LUA_DECLARE ( GetHeatHaze );
    LUA_DECLARE ( SetHeatHaze );
    LUA_DECLARE ( ResetHeatHaze );
    LUA_DECLARE ( SetWeather );
    LUA_DECLARE ( SetWeatherBlended );
    LUA_DECLARE ( SetGravity );
    LUA_DECLARE ( SetGameSpeed );
    LUA_DECLARE ( SetMinuteDuration );
    LUA_DECLARE ( SetWaveHeight );
    LUA_DECLARE ( SetGarageOpen );
    LUA_DECLARE ( SetWorldSpecialPropertyEnabled );
    LUA_DECLARE ( SetBlurLevel );
    LUA_DECLARE ( SetJetpackMaxHeight );
    LUA_DECLARE ( SetCloudsEnabled );
    LUA_DECLARE ( GetCloudsEnabled );
    LUA_DECLARE ( SetTrafficLightState );
    LUA_DECLARE ( SetTrafficLightsLocked );
    LUA_DECLARE ( GetWindVelocity );
    LUA_DECLARE ( SetWindVelocity );
    LUA_DECLARE ( ResetWindVelocity );
    LUA_DECLARE ( GetInteriorSoundsEnabled );
    LUA_DECLARE ( SetInteriorSoundsEnabled );
    LUA_DECLARE ( GetInteriorFurnitureEnabled );
    LUA_DECLARE ( SetInteriorFurnitureEnabled );
    LUA_DECLARE ( GetRainLevel );
    LUA_DECLARE ( SetRainLevel );
    LUA_DECLARE ( ResetRainLevel );
    LUA_DECLARE ( GetFarClipDistance );
    LUA_DECLARE ( SetFarClipDistance );
    LUA_DECLARE ( ResetFarClipDistance );
    LUA_DECLARE ( GetNearClipDistance );
    LUA_DECLARE ( SetNearClipDistance );
    LUA_DECLARE ( ResetNearClipDistance );
    LUA_DECLARE ( GetFogDistance );
    LUA_DECLARE ( SetFogDistance );
    LUA_DECLARE ( ResetFogDistance );
    LUA_DECLARE ( GetSunColor );
    LUA_DECLARE ( SetSunColor );
    LUA_DECLARE ( ResetSunColor );
    LUA_DECLARE ( GetSunSize );
    LUA_DECLARE ( SetSunSize );
    LUA_DECLARE ( ResetSunSize );
    LUA_DECLARE ( RemoveWorldBuilding );
    LUA_DECLARE ( RestoreWorldBuildings );
    LUA_DECLARE ( RestoreWorldBuilding );
    LUA_DECLARE ( SetAircraftMaxHeight );
    LUA_DECLARE ( SetAircraftMaxVelocity );
    LUA_DECLARE ( SetOcclusionsEnabled );
    LUA_DECLARE ( CreateSWATRope );
    LUA_DECLARE ( SetBirdsEnabled );
    LUA_DECLARE ( GetBirdsEnabled );
    LUA_DECLARE ( SetPedTargetingMarkerEnabled );
    LUA_DECLARE ( IsPedTargetingMarkerEnabled );
    LUA_DECLARE ( SetMoonSize );
    LUA_DECLARE ( GetMoonSize );
    LUA_DECLARE ( ResetMoonSize );
    LUA_DECLARE ( SetFPSLimit );
    LUA_DECLARE ( GetFPSLimit );
    LUA_DECLARE ( FetchRemote );

    // Input functions
    LUA_DECLARE ( BindKey );
    LUA_DECLARE ( UnbindKey );
    LUA_DECLARE ( GetKeyState );
    LUA_DECLARE ( GetControlState );
    LUA_DECLARE ( GetAnalogControlState );
    LUA_DECLARE ( SetAnalogControlState );
    LUA_DECLARE ( IsControlEnabled );
    LUA_DECLARE ( GetBoundKeys );
    LUA_DECLARE ( GetFunctionsBoundToKey );
    LUA_DECLARE ( GetKeyBoundToFunction );
    LUA_DECLARE ( GetCommandsBoundToKey );
    LUA_DECLARE ( GetKeyBoundToCommand );

    LUA_DECLARE ( SetControlState );
    LUA_DECLARE ( ToggleControl );
    LUA_DECLARE ( ToggleAllControls );

    // XML Functions
    LUA_DECLARE ( XMLNodeFindChild );
    LUA_DECLARE ( XMLNodeGetChildren );
    LUA_DECLARE ( XMLNodeGetValue );
    LUA_DECLARE ( XMLNodeSetValue );
    LUA_DECLARE ( XMLNodeGetAttributes );
    LUA_DECLARE ( XMLNodeGetAttribute );
    LUA_DECLARE ( XMLNodeSetAttribute );
    LUA_DECLARE ( XMLNodeGetParent );
    LUA_DECLARE ( XMLLoadFile );
    LUA_DECLARE ( XMLCreateFile );
    LUA_DECLARE ( XMLUnloadFile );
    LUA_DECLARE ( XMLSaveFile );
    LUA_DECLARE ( XMLCreateChild );
    LUA_DECLARE ( XMLDestroyNode );
    LUA_DECLARE ( XMLCopyFile );
    LUA_DECLARE ( XMLNodeGetName );
    LUA_DECLARE ( XMLNodeSetName );

    // Command funcs
    LUA_DECLARE ( AddCommandHandler );
    LUA_DECLARE ( RemoveCommandHandler );
    LUA_DECLARE ( ExecuteCommandHandler );

    // Utility vector math functions
    LUA_DECLARE ( GetDistanceBetweenPoints2D );
    LUA_DECLARE ( GetDistanceBetweenPoints3D );
    LUA_DECLARE ( GetEasingValue );
    LUA_DECLARE ( InterpolateBetween );

    // Utility
    LUA_DECLARE ( Md5 );
    LUA_DECLARE ( Sha256 );
    LUA_DECLARE ( Hash );
    LUA_DECLARE ( TeaEncode );
    LUA_DECLARE ( TeaDecode );
    LUA_DECLARE ( Base64encode );
    LUA_DECLARE ( Base64decode );
    LUA_DECLARE ( GetNetworkUsageData );
    LUA_DECLARE ( GetNetworkStats );
    LUA_DECLARE ( GetPerformanceStats );
    LUA_DECLARE ( AddDebugHook );
    LUA_DECLARE ( RemoveDebugHook );
    LUA_DECLARE ( IsOOPEnabled );
    LUA_DECLARE ( GetUserdataType );

    LUA_DECLARE ( GetVersion );

    // L10n
    LUA_DECLARE ( GetLocalization );

    // JSON funcs
    LUA_DECLARE ( toJSON );
    LUA_DECLARE ( fromJSON );

    // UTF functions
    LUA_DECLARE ( UtfLen );
    LUA_DECLARE ( UtfSeek );
    LUA_DECLARE ( UtfSub );
    LUA_DECLARE ( UtfChar );
    LUA_DECLARE ( UtfCode );

    // PCRE functions

    LUA_DECLARE ( PregFind );
    LUA_DECLARE ( PregReplace );
    LUA_DECLARE ( PregMatch );

    // Voice functions
    LUA_DECLARE ( IsVoiceEnabled );

private:
    // Static references to objects
    static CLuaManager*                 m_pLuaManager;
    static CScriptDebugging*            m_pScriptDebugging;
    static CClientGame*                 m_pClientGame;
    static CClientManager*              m_pManager;
    static CClientEntity*               m_pRootEntity;
    static CClientGUIManager*           m_pGUIManager;
    static CClientPedManager*           m_pPedManager;
    static CClientPlayerManager*        m_pPlayerManager;
    static CClientRadarMarkerManager*   m_pRadarMarkerManager;
    static CResourceManager*            m_pResourceManager;
    static CClientVehicleManager*       m_pVehicleManager;
    static CClientColManager*           m_pColManager;
    static CClientObjectManager*        m_pObjectManager;
    static CClientTeamManager*          m_pTeamManager;
    static CRenderWare*                 m_pRenderWare;
    static CClientMarkerManager*        m_pMarkerManager;
    static CClientPickupManager*        m_pPickupManager;
    static CClientDFFManager*           m_pDFFManager;
    static CClientColModelManager*      m_pColModelManager;
    static CRegisteredCommands*         m_pRegisteredCommands;
};
