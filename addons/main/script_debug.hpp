/**
STACK TRACING
**/
//#define ENABLE_CALLSTACK
//#define ENABLE_PERFORMANCE_COUNTERS
//#define DEBUG_EVENTS

#ifdef ENABLE_CALLSTACK

#define CALLSTACK(function) {private ['_ret']; if(16AA_IS_ERRORED) then { ['AUTO','AUTO'] call 16AA_DUMPSTACK_FNC; 16AA_IS_ERRORED = false; }; 16AA_IS_ERRORED = true; 16AA_STACK_TR16AA set [16AA_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, 16AA_CURRENT_FUNCTION, 'ANON', _this]]; 16AA_STACK_DEPTH = 16AA_STACK_DEPTH + 1; 16AA_CURRENT_FUNCTION = 'ANON'; _ret = _this call ##function; 16AA_STACK_DEPTH = 16AA_STACK_DEPTH - 1; 16AA_IS_ERRORED = false; _ret;}
#define CALLSTACK_NAMED(function, functionName) {private ['_ret']; if(16AA_IS_ERRORED) then { ['AUTO','AUTO'] call 16AA_DUMPSTACK_FNC; 16AA_IS_ERRORED = false; }; 16AA_IS_ERRORED = true; 16AA_STACK_TR16AA set [16AA_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, 16AA_CURRENT_FUNCTION, functionName, _this]]; 16AA_STACK_DEPTH = 16AA_STACK_DEPTH + 1; 16AA_CURRENT_FUNCTION = functionName; _ret = _this call ##function; 16AA_STACK_DEPTH = 16AA_STACK_DEPTH - 1; 16AA_IS_ERRORED = false; _ret;}
#define DUMPSTACK ([__FILE__, __LINE__] call 16AA_DUMPSTACK_FNC)

#define FUNC(var1) {private ['_ret']; if(16AA_IS_ERRORED) then { ['AUTO','AUTO'] call 16AA_DUMPSTACK_FNC; 16AA_IS_ERRORED = false; }; 16AA_IS_ERRORED = true; 16AA_STACK_TR16AA set [16AA_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, 16AA_CURRENT_FUNCTION, 'TRIPLES(ADDON,fnc,var1)', _this]]; 16AA_STACK_DEPTH = 16AA_STACK_DEPTH + 1; 16AA_CURRENT_FUNCTION = 'TRIPLES(ADDON,fnc,var1)'; _ret = _this call TRIPLES(ADDON,fnc,var1); 16AA_STACK_DEPTH = 16AA_STACK_DEPTH - 1; 16AA_IS_ERRORED = false; _ret;}
#define EFUNC(var1,var2) {private ['_ret']; if(16AA_IS_ERRORED) then { ['AUTO','AUTO'] call 16AA_DUMPSTACK_FNC; 16AA_IS_ERRORED = false; }; 16AA_IS_ERRORED = true; 16AA_STACK_TR16AA set [16AA_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, 16AA_CURRENT_FUNCTION, 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)', _this]]; 16AA_STACK_DEPTH = 16AA_STACK_DEPTH + 1; 16AA_CURRENT_FUNCTION = 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)'; _ret = _this call TRIPLES(DOUBLES(PREFIX,var1),fnc,var2); 16AA_STACK_DEPTH = 16AA_STACK_DEPTH - 1; 16AA_IS_ERRORED = false; _ret;}

#else
#define CALLSTACK(function) function
#define CALLSTACK_NAMED(function, functionName) function
#define DUMPSTACK

#define FUNC(var1) TRIPLES(ADDON,fnc,var1)
#define EFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#endif
