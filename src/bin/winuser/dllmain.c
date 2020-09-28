/*++

    Copyright (c) Microsoft Corporation.
    Licensed under the MIT License.

Abstract:

    Dynamic Link Library Entry Point

--*/

#include "quic_platform.h"
#ifdef QUIC_CLOG
#include "quic_trace.h"
#endif

#include <winperf.h>
#include <perflib.h>

EXTERN_C DECLSPEC_SELECTANY GUID MsQuicPcwMY_PROVIDERGuid = { 0xaa01ec53, 0x6481, 0x4977, 0x97, 0xe2, 0xbd, 0x25, 0xac, 0x87, 0xc5, 0x8 };

EXTERN_C DECLSPEC_SELECTANY GUID MsQuicPcwQuicCountersGuid = { 0x292b0e56, 0x530b, 0x45c4, 0x90, 0x63, 0x6a, 0x49, 0x2e, 0xc5, 0xa0, 0x5a };


EXTERN_C DECLSPEC_SELECTANY HANDLE MsQuicPcwMY_PROVIDER = NULL;

EXTERN_C DECLSPEC_SELECTANY struct {
    PERF_COUNTERSET_INFO CounterSet;
    PERF_COUNTER_INFO Counter0;
    PERF_COUNTER_INFO Counter1;
    PERF_COUNTER_INFO Counter2;
    PERF_COUNTER_INFO Counter3;
    PERF_COUNTER_INFO Counter4;
    PERF_COUNTER_INFO Counter5;
    PERF_COUNTER_INFO Counter6;
    PERF_COUNTER_INFO Counter7;
    PERF_COUNTER_INFO Counter8;
    PERF_COUNTER_INFO Counter9;
    PERF_COUNTER_INFO Counter10;
    PERF_COUNTER_INFO Counter11;
    PERF_COUNTER_INFO Counter12;
    PERF_COUNTER_INFO Counter13;
    PERF_COUNTER_INFO Counter14;
    PERF_COUNTER_INFO Counter15;
    PERF_COUNTER_INFO Counter16;
    PERF_COUNTER_INFO Counter17;
    PERF_COUNTER_INFO Counter18;
    PERF_COUNTER_INFO Counter19;
    PERF_COUNTER_INFO Counter20;
    PERF_COUNTER_INFO Counter21;
    PERF_COUNTER_INFO Counter22;
    PERF_COUNTER_INFO Counter23;
    PERF_COUNTER_INFO Counter24;
    PERF_COUNTER_INFO Counter25;
    PERF_COUNTER_INFO Counter26;
    PERF_COUNTER_INFO Counter27;
    PERF_COUNTER_INFO Counter28;
    PERF_COUNTER_INFO Counter29;
    PERF_COUNTER_INFO Counter30;
    PERF_COUNTER_INFO Counter31;
    PERF_COUNTER_INFO Counter32;
} MsQuicPcwQuicCountersInfo = {
    { { 0x292b0e56, 0x530b, 0x45c4, 0x90, 0x63, 0x6a, 0x49, 0x2e, 0xc5, 0xa0, 0x5a }, { 0xaa01ec53, 0x6481, 0x4977, 0x97, 0xe2, 0xbd, 0x25, 0xac, 0x87, 0xc5, 0x8 }, 33, PERF_COUNTERSET_SINGLE_INSTANCE },
    { 0, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 1, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 2, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 3, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 4, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 5, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 6, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 7, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 8, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 9, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 10, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 11, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 12, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 13, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 14, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 15, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 16, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 17, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 18, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 19, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 20, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 21, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 22, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 23, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 24, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 25, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 26, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 27, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 28, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 29, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 30, PERF_COUNTER_LARGE_RAWCOUNT, 0, sizeof(ULONGLONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 31, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
    { 32, PERF_COUNTER_COUNTER, 0, sizeof(ULONG), PERF_DETAIL_NOVICE, 0, 0 },
};

EXTERN_C FORCEINLINE
VOID
MsQuicPcwCounterCleanup(
    VOID
    )
{
    if (MsQuicPcwMY_PROVIDER != NULL) {
        PerfStopProvider(MsQuicPcwMY_PROVIDER);
        MsQuicPcwMY_PROVIDER = NULL;
    }
}

EXTERN_C FORCEINLINE
ULONG
MsQuicPcwCounterInitialize(
    void
    )
{
    ULONG Status;
    PERF_PROVIDER_CONTEXT ProviderContext;

    ZeroMemory(&ProviderContext, sizeof(PERF_PROVIDER_CONTEXT));
    ProviderContext.ContextSize = sizeof(PERF_PROVIDER_CONTEXT);

    Status = PerfStartProviderEx(&MsQuicPcwMY_PROVIDERGuid,
                                 &ProviderContext,
                                 &MsQuicPcwMY_PROVIDER);
    if (Status != ERROR_SUCCESS) {
        MsQuicPcwMY_PROVIDER = NULL;
        return Status;
    }

    Status = PerfSetCounterSetInfo(MsQuicPcwMY_PROVIDER,
                                   &MsQuicPcwQuicCountersInfo.CounterSet,
                                   sizeof MsQuicPcwQuicCountersInfo);

    if (Status != ERROR_SUCCESS) {
        MsQuicPcwCounterCleanup();
        return Status;
    }

    return ERROR_SUCCESS;
}

// ULONG
// WINAPI
// MsQuicPerfLibRequest(
//     _In_ ULONG RequestCode,
//     _In_ PVOID Buffer,
//     _In_ ULONG BufferSize
// )
// {

// }

void
MsQuicLibraryLoad(
    void
    );

void
MsQuicLibraryUnload(
    void
    );

BOOL
__stdcall
DllMain(
    _In_ HINSTANCE Instance,
    _In_ DWORD Reason,
    _In_ LPVOID Reserved
    )
{
    UNREFERENCED_PARAMETER(Reserved);

    switch (Reason) {

    case DLL_PROCESS_ATTACH:
#ifndef _MT // Don't disable thread library calls with static CRT!
        DisableThreadLibraryCalls(Instance);
#else
        UNREFERENCED_PARAMETER(Instance);
#endif
        QuicPlatformSystemLoad();
        MsQuicLibraryLoad();
        MsQuicPcwCounterInitialize();

        PerfCreateInstance(MsQuicPcwMY_PROVIDER, &MsQuicPcwQuicCountersGuid, L"QUIC Performance Diagnostics", 0);


        break;

    case DLL_PROCESS_DETACH:
        MsQuicPcwCounterCleanup();
        MsQuicLibraryUnload();
        QuicPlatformSystemUnload();
        break;
    }

    return TRUE;
}
