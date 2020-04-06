def solution(genres, plays):
    sum_dict = {}
    index_dict = {}
    answer = []
    genres_len = len(genres)
    for i in range(genres_len):
        index = index_dict.get(genres[i],-1)
        if index==-1:
            index_dict[genres[i]] = [[plays[i], i]]
        else:
            index_dict[genres[i]].append([plays[i],i])
        idx = sum_dict.get(genres[i],-1)
        if idx==-1:
            sum_dict[genres[i]] = plays[i]
        else:
            sum_dict[genres[i]] += plays[i]
    sum_dict = sorted(sum_dict, key=(lambda x: x[1]), reverse=True)
    for item in sum_dict:
        index_list = sorted(index_dict[item], key=(lambda x: -x[0]))
        index_list = index_list[:2]
        for index in index_list:
            answer.append(index[1])
        
    
    return answer