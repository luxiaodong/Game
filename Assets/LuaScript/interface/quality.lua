
quality = {}

function quality.setVSyncCount(value)
	QualitySettings.vSyncCount = value
end

function quality.setFps(value)
	quality.setVSyncCount(enum.unity.vSync.dont)
	Application.targetFrameRate = value
end

function quality.setLevel(level, applyExpensiveChanges)
	QualitySettings.SetQualityLevel(level, applyExpensiveChanges)
end

function quality.level()
	return QualitySettings.GetQualityLevel()
end

return quality
