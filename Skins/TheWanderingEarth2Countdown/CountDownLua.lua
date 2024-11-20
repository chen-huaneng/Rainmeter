function getday(var1, var2, var3)
    
    local arr = {
        year = tonumber(var1), 
        month = tonumber(var2), 
        day = tonumber(var3), 
        hour = 0, 
        minute = 0, 
        second = 0
    }

    local rLeft = os.time(arr) - os.time()
    local dLeft = math.floor(rLeft/60/60/24)

    if dLeft < 0 then
        dLeft = 0
    else
        dLeft = dLeft + 1
    end

    return dLeft
end

function getsize(var1, var2, var3)

    return (tonumber(var1) * tonumber(var2)) .. var3

end