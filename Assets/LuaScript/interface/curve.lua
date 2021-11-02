curve = {}

-- https://www.jianshu.com/p/ddff577138bf?utm_campaign=maleskine&utm_content=note&utm_medium=seo_notes&utm_source=recommendation

function curve.linear(a,b,t)
	return a+(b-a)*t
end

function curve.easeInSine(a,b,t)
	t = 1 - cos(t*math.pi/2)
	return curve.linear(a,b,t)
end

function curve.easeOutSine(a,b,t)
	t = sin(t*math.pi/2)
	return curve.linear(a,b,t)
end
