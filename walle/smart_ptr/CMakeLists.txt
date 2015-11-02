install(DIRECTORY detail DESTINATION include/walle/smart_ptr)
#install(DIRECTORY xml DESTINATION include/walle/ext)

file(GLOB HEADERS "*.h")
install(FILES ${HEADERS} DESTINATION include/walle/smart_ptr)
#add_subdirectory(test)