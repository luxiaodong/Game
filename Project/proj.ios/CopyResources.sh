
GAME_PROJECT_DIR="$1/../../Build/Release"
TARGET_BUILD_CONTENTS_PATH=$2/Data/Raw
echo ${TARGET_BUILD_CONTENTS_PATH}
if [ -d ${GAME_PROJECT_DIR} ]; then
	cp -R ${GAME_PROJECT_DIR} ${TARGET_BUILD_CONTENTS_PATH}
	# for file in ${GAME_PROJECT_DIR}/*
	# do
	# 	if [ -d "$file" ]; then
	# 		cp -R "$file" ${TARGET_BUILD_CONTENTS_PATH}/
	# 	fi
	# done
fi
