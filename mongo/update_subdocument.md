> db.domain.updateOne({"domain" : "tesla.com","subdomain.name":"x.tesla.com"},{$set:{"subdomain.$.port":4499,"subdomain.$.updatenewsubdomcumentarray":"successs"}})
{ "acknowledged" : true, "matchedCount" : 1, "modifiedCount" : 1 }
> db.domain.find().pretty()
{
	"_id" : ObjectId("5ee891eebcfd2f0aa306f0e3"),
	"domain" : "tesla.com",
	"port" : [
		1,
		2,
		3,
		4
	],
	"subdomain" : [
		{
			"name" : "x.tesla.com",
			"port" : 4499,
			"webtech" : "lol",
			"updatenewsubdomcumentarray" : "successs"
		},
		{
			"name" : "c.tesla.com",
			"port" : 4444
		}
	],
	"webtech" : "test",
	"webtesh" : "lol"
}
{ "_id" : ObjectId("5ee8925abcfd2f0aa306f0e4"), "domain" : "nokia.com" }

