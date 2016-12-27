/* Standard includes. */
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

/* FreeRTOS includes. */
#include <FreeRTOS.h>
#include "task.h"
#include "timers.h"
#include "queue.h"
#include "semphr.h"

/* FreeRTOS+TCP includes. */
#include "FreeRTOS_IP.h"
#include "FreeRTOS_Sockets.h"
#include "FreeRTOS_tcp_server.h"
#include "FreeRTOS_DHCP.h"

/* Demo application includes. */
// #include "TCPEchoClient_SingleTasks.h"
// #include "SimpleTCPEchoServer.h"
// #include "hr_gettime.h"
// #include "UDPLoggingPrintf.h"

/*
 * This diagnostic pragma will suppress the -Wmain warning,
 * raised when main() does not return an int
 * (which is perfectly OK in bare metal programming!).
 *
 * More details about the GCC diagnostic pragmas:
 * https://gcc.gnu.org/onlinedocs/gcc/Diagnostic-Pragmas.html
 */
#pragma GCC diagnostic ignored "-Wmain"

/* Startup function that creates and runs two FreeRTOS tasks */
void main(void)
{

}
