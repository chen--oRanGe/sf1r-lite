/**
 * @file sf1r/driver/Keys.inl
 * @date Created <2011-05-13 16:50:52>
 *
 * This file is generated by generators/driver_keys.rb by collecting keys
 * from source code. Do not edit this file directly.
 */

#define SF1_DRIVER_KEYS \
(DOCID)\
(ITEMID)\
(USERID)\
(_categories)\
(_custom_rank)\
(_duplicated_document_count)\
(_id)\
(_image_id)\
(_rank)\
(_similar_document_count)\
(analyzer)\
(analyzer_result)\
(apply_la)\
(category_id)\
(cid)\
(cname)\
(collection)\
(conditions)\
(content)\
(count)\
(counter)\
(custom_rank)\
(doccount)\
(docid)\
(docid_list)\
(document_count)\
(document_support_count)\
(duplicate_with)\
(duration)\
(elapsed_time)\
(exclude_items)\
(expression)\
(faceted)\
(freq)\
(func)\
(group)\
(group_label)\
(groupby)\
(highlight)\
(hit_docs_num)\
(id)\
(in)\
(include_items)\
(index)\
(input_items)\
(items)\
(keywords)\
(label)\
(labels)\
(last_modified)\
(left_time)\
(level)\
(limit)\
(log_keywords)\
(manmade)\
(max_count)\
(message)\
(meta)\
(min_freq)\
(mining)\
(name)\
(name_entity)\
(name_entity_item)\
(name_entity_list)\
(name_entity_type)\
(offset)\
(operator_)\
(order)\
(order_id)\
(page_count)\
(page_start)\
(params)\
(popular)\
(popular_queries)\
(prefix)\
(price)\
(progress)\
(property)\
(quantity)\
(query)\
(ranking_model)\
(realtime)\
(realtime_queries)\
(rec_type_id)\
(recent)\
(refined_query)\
(related_queries)\
(remote_ip)\
(remove_duplicated_result)\
(resource)\
(resources)\
(search)\
(search_session)\
(seconds)\
(select)\
(session_id)\
(sim_list)\
(similar_to)\
(similar_to_image)\
(snippet)\
(sort)\
(source)\
(status)\
(sub_labels)\
(summary)\
(summary_property_alias)\
(summary_sentence_count)\
(system_events)\
(taxonomy)\
(taxonomy_label)\
(timestamp)\
(top_k_count)\
(total_count)\
(type)\
(use_original_keyword)\
(use_synonym_extension)\
(user_queries)\
(value)\
(weight)


/* LOCATIONS

DOCID
  process/controllers/DocumentsGetHandler.cpp:273
  process/controllers/DocumentsGetHandler.cpp:275
  process/controllers/DocumentsGetHandler.cpp:328
  process/controllers/DocumentsGetHandler.cpp:353
  process/controllers/DocumentsController.cpp:470
  process/controllers/DocumentsController.cpp:537
  process/controllers/DocumentsController.cpp:585

ITEMID
  process/controllers/RecommendController.cpp:87
  process/controllers/RecommendController.cpp:133
  process/controllers/RecommendController.cpp:142
  process/controllers/RecommendController.cpp:399
  process/controllers/RecommendController.cpp:450
  process/controllers/RecommendController.cpp:494
  process/controllers/RecommendController.cpp:496
  process/controllers/RecommendController.cpp:546
  process/controllers/RecommendController.cpp:549
  process/controllers/RecommendController.cpp:555
  process/controllers/RecommendController.cpp:608
  process/controllers/RecommendController.cpp:611
  process/controllers/RecommendController.cpp:682
  process/controllers/RecommendController.cpp:685
  process/controllers/RecommendController.cpp:859
  process/controllers/RecommendController.cpp:974

USERID
  process/controllers/RecommendController.cpp:53
  process/controllers/RecommendController.cpp:190
  process/controllers/RecommendController.cpp:240
  process/controllers/RecommendController.cpp:284
  process/controllers/RecommendController.cpp:286
  process/controllers/RecommendController.cpp:335
  process/controllers/RecommendController.cpp:338
  process/controllers/RecommendController.cpp:344
  process/controllers/RecommendController.cpp:607
  process/controllers/RecommendController.cpp:610
  process/controllers/RecommendController.cpp:665
  process/controllers/RecommendController.cpp:667
  process/controllers/RecommendController.cpp:794
  process/parsers/SearchParser.cpp:94

_categories
  process/renderers/DocumentsRenderer.cpp:157

_custom_rank
  process/renderers/DocumentsRenderer.cpp:100

_duplicated_document_count
  process/renderers/DocumentsRenderer.cpp:138

_id
  process/controllers/FacetedController.cpp:393
  process/controllers/DocumentsGetHandler.cpp:268
  process/controllers/DocumentsGetHandler.cpp:270
  process/controllers/DocumentsGetHandler.cpp:328
  process/controllers/DocumentsGetHandler.cpp:345
  process/renderers/DocumentsRenderer.cpp:39
  process/renderers/DocumentsRenderer.cpp:94

_image_id
  process/controllers/DocumentsGetHandler.cpp:192
  process/renderers/DocumentsRenderer.cpp:151

_rank
  process/renderers/DocumentsRenderer.cpp:95

_similar_document_count
  process/renderers/DocumentsRenderer.cpp:145

analyzer
  process/parsers/SearchParser.cpp:203

analyzer_result
  process/controllers/DocumentsSearchHandler.cpp:514
  process/controllers/DocumentsSearchHandler.cpp:532

apply_la
  process/parsers/SearchParser.cpp:204

category_id
  process/controllers/FacetedController.cpp:413
  process/controllers/FacetedController.cpp:415

cid
  process/controllers/FacetedController.cpp:395

cname
  process/controllers/FacetedController.cpp:396

collection
  process/controllers/QueryCorrectionController.cpp:28
  process/controllers/LogAnalysisController.cpp:247
  process/controllers/LogAnalysisController.cpp:304
  process/controllers/Sf1Controller.cpp:37
  process/controllers/DocumentsController.cpp:606
  process/controllers/KeywordsController.cpp:64
  process/controllers/CommandsController.cpp:23
  process/controllers/StatusController.cpp:44
  process/controllers/DocumentsSearchHandler.cpp:78

conditions
  process/controllers/LogAnalysisController.cpp:69
  process/controllers/LogAnalysisController.cpp:71
  process/controllers/DocumentsGetHandler.cpp:316
  process/controllers/DocumentsSearchHandler.cpp:386

content
  process/controllers/LogAnalysisController.cpp:181
  process/controllers/FacetedController.cpp:49
  process/controllers/FacetedController.cpp:103

count
  process/controllers/LogAnalysisController.cpp:183
  process/controllers/LogAnalysisController.cpp:254

counter
  process/controllers/StatusController.cpp:73

custom_rank
  process/controllers/DocumentsSearchHandler.cpp:390
  process/controllers/DocumentsSearchHandler.cpp:393

doccount
  process/controllers/FacetedController.cpp:160
  process/controllers/FacetedController.cpp:277

docid
  process/controllers/FacetedController.cpp:394

docid_list
  process/controllers/FacetedController.cpp:428

document_count
  process/controllers/CommandsController.cpp:63
  process/controllers/StatusController.cpp:55
  process/controllers/StatusController.cpp:71
  process/renderers/DocumentsRenderer.cpp:237
  process/renderers/DocumentsRenderer.cpp:301
  process/renderers/DocumentsRenderer.cpp:350
  process/renderers/DocumentsRenderer.cpp:356

document_support_count
  process/renderers/DocumentsRenderer.cpp:269

duplicate_with
  process/controllers/DocumentsGetHandler.cpp:101

duration
  process/controllers/LogAnalysisController.cpp:252
  process/controllers/LogAnalysisController.cpp:324
  process/controllers/LogAnalysisController.cpp:328
  process/controllers/LogAnalysisController.cpp:336

elapsed_time
  process/controllers/StatusController.cpp:67

exclude_items
  process/controllers/RecommendController.cpp:789

expression
  process/parsers/CustomRankingParser.cpp:91
  process/parsers/CustomRankingParser.cpp:92

faceted
  process/controllers/DocumentsSearchHandler.cpp:723

freq
  process/controllers/RecommendController.cpp:966

func
  core/common/parsers/SelectFieldParser.cpp:32

group
  process/controllers/DocumentsSearchHandler.cpp:406
  process/controllers/DocumentsSearchHandler.cpp:728

group_label
  process/parsers/SearchParser.cpp:102
  process/parsers/SearchParser.cpp:122

groupby
  process/controllers/LogAnalysisController.cpp:105
  process/controllers/LogAnalysisController.cpp:107

highlight
  process/parsers/SelectParser.cpp:119

hit_docs_num
  process/controllers/LogAnalysisController.cpp:248
  process/controllers/LogAnalysisController.cpp:315

id
  process/controllers/FacetedController.cpp:159
  process/controllers/FacetedController.cpp:276
  process/controllers/DocumentsController.cpp:497
  process/controllers/TopicController.cpp:71
  process/renderers/DocumentsRenderer.cpp:300

in
  process/parsers/SearchParser.cpp:152

include_items
  process/controllers/RecommendController.cpp:788

index
  process/controllers/StatusController.cpp:52

input_items
  process/controllers/RecommendController.cpp:787

items
  process/controllers/RecommendController.cpp:670
  process/controllers/RecommendController.cpp:968

keywords
  process/controllers/QueryCorrectionController.cpp:29
  process/controllers/AutoFillController.cpp:102
  process/parsers/SearchParser.cpp:87

label
  process/renderers/DocumentsRenderer.cpp:236
  process/renderers/DocumentsRenderer.cpp:299
  process/renderers/DocumentsRenderer.cpp:355

labels
  process/renderers/DocumentsRenderer.cpp:226
  process/renderers/DocumentsRenderer.cpp:287
  process/renderers/DocumentsRenderer.cpp:351

last_modified
  process/controllers/StatusController.cpp:54
  process/controllers/StatusController.cpp:72
  process/controllers/StatusController.cpp:79
  process/controllers/StatusController.cpp:86

left_time
  process/controllers/StatusController.cpp:68

level
  process/controllers/LogAnalysisController.cpp:179
  process/controllers/FacetedController.cpp:157
  process/controllers/FacetedController.cpp:274

limit
  core/common/parsers/PageInfoParser.cpp:20
  core/common/parsers/PageInfoParser.cpp:22
  process/controllers/DocumentsController.cpp:596
  process/controllers/DocumentsController.cpp:598
  process/controllers/KeywordsController.cpp:65
  process/controllers/AutoFillController.cpp:77

log_keywords
  process/parsers/SearchParser.cpp:149

manmade
  process/controllers/FacetedController.cpp:387

max_count
  process/controllers/RecommendController.cpp:773
  process/controllers/RecommendController.cpp:931

message
  process/controllers/TestController.cpp:28
  process/controllers/TestController.cpp:28

meta
  process/controllers/StatusController.cpp:69

min_freq
  process/controllers/RecommendController.cpp:943

mining
  process/controllers/StatusController.cpp:77

name
  process/controllers/FacetedController.cpp:158
  process/controllers/FacetedController.cpp:275
  process/controllers/DocumentsController.cpp:500
  process/controllers/DocumentsController.cpp:568
  process/controllers/DocumentsController.cpp:576
  process/controllers/TopicController.cpp:61
  process/parsers/CustomRankingParser.cpp:126

name_entity
  process/controllers/DocumentsSearchHandler.cpp:718

name_entity_item
  process/parsers/SearchParser.cpp:99
  process/parsers/SearchParser.cpp:111
  process/renderers/DocumentsRenderer.cpp:268

name_entity_list
  process/renderers/DocumentsRenderer.cpp:260

name_entity_type
  process/parsers/SearchParser.cpp:100
  process/parsers/SearchParser.cpp:112

offset
  core/common/parsers/PageInfoParser.cpp:15
  core/common/parsers/PageInfoParser.cpp:17

operator_
  core/common/parsers/ConditionParser.cpp:68

order
  core/common/parsers/OrderParser.cpp:23

order_id
  process/controllers/RecommendController.cpp:668

page_count
  process/controllers/LogAnalysisController.cpp:250
  process/controllers/LogAnalysisController.cpp:317

page_start
  process/controllers/LogAnalysisController.cpp:249
  process/controllers/LogAnalysisController.cpp:316

params
  process/parsers/CustomRankingParser.cpp:80
  process/parsers/CustomRankingParser.cpp:81

popular
  process/controllers/KeywordsController.cpp:126
  process/controllers/KeywordsController.cpp:136
  process/controllers/KeywordsController.cpp:138

popular_queries
  process/controllers/DocumentsSearchHandler.cpp:703

prefix
  process/controllers/AutoFillController.cpp:76

price
  process/controllers/RecommendController.cpp:690

progress
  process/controllers/StatusController.cpp:66

property
  core/common/parsers/OrderParser.cpp:22
  core/common/parsers/SelectFieldParser.cpp:30
  core/common/parsers/ConditionParser.cpp:43
  process/parsers/SelectParser.cpp:118
  process/parsers/GroupingParser.cpp:54
  process/parsers/SearchParser.cpp:132
  process/parsers/SearchParser.cpp:165
  process/renderers/DocumentsRenderer.cpp:349

quantity
  process/controllers/RecommendController.cpp:689

query
  process/controllers/LogAnalysisController.cpp:246
  process/controllers/LogAnalysisController.cpp:303

ranking_model
  process/parsers/SearchParser.cpp:210
  process/parsers/SearchParser.cpp:212

realtime
  process/controllers/KeywordsController.cpp:127
  process/controllers/KeywordsController.cpp:163
  process/controllers/KeywordsController.cpp:165

realtime_queries
  process/controllers/DocumentsSearchHandler.cpp:708

rec_type_id
  process/controllers/RecommendController.cpp:770
  process/controllers/RecommendController.cpp:795

recent
  process/controllers/KeywordsController.cpp:97
  process/controllers/KeywordsController.cpp:99

refined_query
  process/controllers/QueryCorrectionController.cpp:41
  process/controllers/DocumentsSearchHandler.cpp:741

related_queries
  process/controllers/DocumentsSearchHandler.cpp:698

remote_ip
  process/controllers/DocumentsGetHandler.cpp:40
  process/controllers/DocumentsSearchHandler.cpp:77

remove_duplicated_result
  process/controllers/DocumentsSearchHandler.cpp:513

resource
  process/controllers/RecommendController.cpp:34
  process/controllers/RecommendController.cpp:113
  process/controllers/RecommendController.cpp:193
  process/controllers/RecommendController.cpp:243
  process/controllers/RecommendController.cpp:286
  process/controllers/RecommendController.cpp:338
  process/controllers/RecommendController.cpp:343
  process/controllers/RecommendController.cpp:402
  process/controllers/RecommendController.cpp:453
  process/controllers/RecommendController.cpp:496
  process/controllers/RecommendController.cpp:549
  process/controllers/RecommendController.cpp:554
  process/controllers/RecommendController.cpp:610
  process/controllers/RecommendController.cpp:611
  process/controllers/RecommendController.cpp:667
  process/controllers/RecommendController.cpp:668
  process/controllers/RecommendController.cpp:670
  process/controllers/RecommendController.cpp:773
  process/controllers/RecommendController.cpp:794
  process/controllers/RecommendController.cpp:795
  process/controllers/RecommendController.cpp:931
  process/controllers/RecommendController.cpp:943
  process/controllers/DocumentsController.cpp:341
  process/controllers/DocumentsController.cpp:385
  process/controllers/DocumentsController.cpp:426
  process/controllers/DocumentsController.cpp:469
  process/controllers/DocumentsController.cpp:536
  process/controllers/DocumentsController.cpp:585

resources
  process/controllers/RecommendController.cpp:851
  process/controllers/RecommendController.cpp:961
  process/controllers/FacetedController.cpp:147
  process/controllers/FacetedController.cpp:210
  process/controllers/FacetedController.cpp:264
  process/controllers/FacetedController.cpp:327
  process/controllers/DocumentsGetHandler.cpp:48
  process/controllers/DocumentsGetHandler.cpp:183
  process/controllers/DocumentsGetHandler.cpp:393
  process/controllers/DocumentsGetHandler.cpp:411
  process/controllers/DocumentsGetHandler.cpp:443
  process/controllers/DocumentsController.cpp:492
  process/controllers/DocumentsController.cpp:561
  process/controllers/TopicController.cpp:54
  process/controllers/DocumentsSearchHandler.cpp:675
  process/controllers/DocumentsSearchHandler.cpp:686

search
  process/controllers/DocumentsSearchHandler.cpp:382

search_session
  process/controllers/DocumentsGetHandler.cpp:227
  process/controllers/DocumentsGetHandler.cpp:230

seconds
  process/controllers/TestController.cpp:43

select
  process/controllers/LogAnalysisController.cpp:29
  process/controllers/LogAnalysisController.cpp:31
  process/controllers/DocumentsGetHandler.cpp:208
  process/controllers/KeywordsController.cpp:75
  process/controllers/KeywordsController.cpp:79
  process/controllers/DocumentsSearchHandler.cpp:378

session_id
  process/controllers/LogAnalysisController.cpp:251

sim_list
  process/controllers/DocumentsController.cpp:569

similar_to
  process/controllers/DocumentsGetHandler.cpp:59
  process/controllers/TopicController.cpp:68
  process/controllers/TopicController.cpp:70

similar_to_image
  process/controllers/DocumentsGetHandler.cpp:143

snippet
  process/parsers/SelectParser.cpp:131

sort
  process/controllers/LogAnalysisController.cpp:53
  process/controllers/LogAnalysisController.cpp:55
  process/controllers/DocumentsSearchHandler.cpp:398

source
  process/controllers/LogAnalysisController.cpp:180

status
  process/controllers/StatusController.cpp:53
  process/controllers/StatusController.cpp:62
  process/controllers/StatusController.cpp:78
  process/controllers/StatusController.cpp:84

sub_labels
  process/renderers/DocumentsRenderer.cpp:242
  process/renderers/DocumentsRenderer.cpp:312
  process/renderers/DocumentsRenderer.cpp:357

summary
  process/parsers/SelectParser.cpp:120

summary_property_alias
  process/parsers/SelectParser.cpp:128

summary_sentence_count
  process/parsers/SelectParser.cpp:124

system_events
  process/controllers/LogAnalysisController.cpp:174

taxonomy
  process/controllers/DocumentsSearchHandler.cpp:713

taxonomy_label
  process/parsers/SearchParser.cpp:97
  process/parsers/SearchParser.cpp:110

timestamp
  process/controllers/LogAnalysisController.cpp:182
  process/controllers/LogAnalysisController.cpp:253
  process/controllers/LogAnalysisController.cpp:345
  process/controllers/LogAnalysisController.cpp:349
  process/controllers/LogAnalysisController.cpp:357

top_k_count
  process/controllers/DocumentsSearchHandler.cpp:99
  process/controllers/DocumentsSearchHandler.cpp:197

total_count
  process/controllers/DocumentsGetHandler.cpp:48
  process/controllers/DocumentsGetHandler.cpp:90
  process/controllers/DocumentsGetHandler.cpp:131
  process/controllers/DocumentsGetHandler.cpp:197
  process/controllers/DocumentsGetHandler.cpp:443
  process/controllers/AutoFillController.cpp:99
  process/controllers/DocumentsSearchHandler.cpp:98
  process/controllers/DocumentsSearchHandler.cpp:196

type
  process/parsers/CustomRankingParser.cpp:139
  process/renderers/DocumentsRenderer.cpp:258

use_original_keyword
  process/parsers/SearchParser.cpp:205

use_synonym_extension
  process/parsers/SearchParser.cpp:206

user_queries
  process/controllers/LogAnalysisController.cpp:239
  process/controllers/LogAnalysisController.cpp:287
  process/controllers/LogAnalysisController.cpp:292
  process/controllers/LogAnalysisController.cpp:295

value
  core/common/parsers/ConditionParser.cpp:50
  core/common/parsers/ConditionParser.cpp:57
  core/common/parsers/ConditionParser.cpp:64
  process/parsers/SearchParser.cpp:133
  process/parsers/CustomRankingParser.cpp:140
  process/parsers/CustomRankingParser.cpp:147
  process/parsers/CustomRankingParser.cpp:152

weight
  process/controllers/RecommendController.cpp:856

*/
