/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_Multiply.h"

typedef struct _CMOCK_multiply_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;
  int Expected_value1;
  int Expected_value2;

} CMOCK_multiply_CALL_INSTANCE;

static struct mock_MultiplyInstance
{
  int multiply_IgnoreBool;
  int multiply_FinalReturn;
  CMOCK_multiply_CALLBACK multiply_CallbackFunctionPointer;
  int multiply_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE multiply_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_Multiply_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.multiply_IgnoreBool)
    Mock.multiply_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.multiply_CallInstance, cmock_line, "Function 'multiply' called less times than expected.");
  if (Mock.multiply_CallbackFunctionPointer != NULL)
    Mock.multiply_CallInstance = CMOCK_GUTS_NONE;
}

void mock_Multiply_Init(void)
{
  mock_Multiply_Destroy();
}

void mock_Multiply_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.multiply_CallbackFunctionPointer = NULL;
  Mock.multiply_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

int multiply(int value1, int value2)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_multiply_CALL_INSTANCE* cmock_call_instance = (CMOCK_multiply_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.multiply_CallInstance);
  Mock.multiply_CallInstance = CMock_Guts_MemNext(Mock.multiply_CallInstance);
  if (Mock.multiply_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.multiply_FinalReturn;
    Mock.multiply_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.multiply_CallbackFunctionPointer != NULL)
  {
    return Mock.multiply_CallbackFunctionPointer(value1, value2, Mock.multiply_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'multiply' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'multiply' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'multiply' called later than expected.");
  UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_value1, value1, cmock_line, "Function 'multiply' called with unexpected value for argument 'value1'.");
  UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_value2, value2, cmock_line, "Function 'multiply' called with unexpected value for argument 'value2'.");
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_multiply(CMOCK_multiply_CALL_INSTANCE* cmock_call_instance, int value1, int value2)
{
  cmock_call_instance->Expected_value1 = value1;
  cmock_call_instance->Expected_value2 = value2;
}

void multiply_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_multiply_CALL_INSTANCE));
  CMOCK_multiply_CALL_INSTANCE* cmock_call_instance = (CMOCK_multiply_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.multiply_CallInstance = CMock_Guts_MemChain(Mock.multiply_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.multiply_IgnoreBool = (int)1;
}

void multiply_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int value1, int value2, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_multiply_CALL_INSTANCE));
  CMOCK_multiply_CALL_INSTANCE* cmock_call_instance = (CMOCK_multiply_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.multiply_CallInstance = CMock_Guts_MemChain(Mock.multiply_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_multiply(cmock_call_instance, value1, value2);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void multiply_StubWithCallback(CMOCK_multiply_CALLBACK Callback)
{
  Mock.multiply_CallbackFunctionPointer = Callback;
}
