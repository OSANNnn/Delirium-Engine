/*****************************************************************//**
 * \file   Log.h
 * \brief  Contains the log class and macros for calling logs
 *********************************************************************/
#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Delirium
{
	/// <summary>
	/// Logging system class.
	/// \n TODO: remove the ability for client to call core logs
	/// </summary>
	class DLR_API Log
	{
	public:
		/**
		 * @brief The func sets up the logging system. \n No need to call in client.
		 */
		static void Init();

		/**
		 * @brief Getter method used mainly in the macros, there's no need to call it anywhere.
		 * 
		 * \return A reference to the core logger
		 */
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		/**
		 * @brief Getter method used mainly in the macros, there's no need to call it anywhere.
		 *
		 * \return A reference to the client logger
		 */
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define DLR_CORE_TRACE(...) ::Delirium::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DLR_CORE_INFO(...)  ::Delirium::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DLR_CORE_WARN(...)  ::Delirium::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DLR_CORE_ERROR(...) ::Delirium::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DLR_CORE_FATAL(...) ::Delirium::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define DLR_TRACE(...) ::Delirium::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DLR_INFO(...)  ::Delirium::Log::GetClientLogger()->info(__VA_ARGS__)
#define DLR_WARN(...)  ::Delirium::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DLR_ERROR(...) ::Delirium::Log::GetClientLogger()->error(__VA_ARGS__)
#define DLR_FATAL(...) ::Delirium::Log::GetClientLogger()->critical(__VA_ARGS__)
